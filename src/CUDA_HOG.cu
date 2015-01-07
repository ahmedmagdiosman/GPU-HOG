//=======================================================================
// Copyright Ahmed Magdi Osman 2015.
// Distributed under the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

/*
 * CUDA_HOG.cu
 *
 *  Created on: Oct 27, 2014
 *      Author: Ahmed M. Osman
 */
#include "CUDA_HOG.hpp"

/**
 * This macro checks return value of the CUDA runtime call and exits
 * the application if the call failed.
 */
#define CUDA_CHECK_RETURN(value) {											\
		cudaError_t _m_cudaStat = value;										\
		if (_m_cudaStat != cudaSuccess) {										\
			fprintf(stderr, "Error %s at line %d in file %s\n",					\
					cudaGetErrorString(_m_cudaStat), __LINE__, __FILE__);		\
					exit(1);															\
		} }

__global__ void CUDA::computeGradient(const Image3* _img, Vec2* _imgGradient) {
	//TODO:  handle leftovers. implement shared mem
	if (threadIdx.y < blockDim.y && threadIdx.x < blockDim.x) {

		uint2 blkShr;	// Each block's share //-2 to remove border padding
		blkShr.x = (_img->width() - 2 * BORDERTHICKNESS) / gridDim.x;
		blkShr.y = (_img->height() - 2 * BORDERTHICKNESS) / gridDim.y;
		uint2 tdShr; //Each thread's share;
		tdShr.x = blkShr.x / blockDim.x;
		tdShr.y = blkShr.y / blockDim.y;
		uint2 idx;
		idx.x = blockIdx.x * blkShr.x + threadIdx.x * tdShr.x;
		idx.y = blockIdx.y * blkShr.y + threadIdx.y * tdShr.y;

		//		 Gradient computation -1 0 1 in x and y
		float2* imgGradientPtr;
		uchar3 *prevImgPtr = _img->getConstPtr(1, idx.y), *imgPtr =
				_img->getConstPtr(1, idx.y + 1), *nextImgPtr;
		float gxR, gxG, gxB, gyR, gyG, gyB, mag, mR, mG, mB;
		int x = idx.x, y = idx.y;

		for (; y < idx.y + tdShr.y; y++) {

			imgGradientPtr = _imgGradient->getPtr(0, y);		//row pointer
			nextImgPtr = _img->getConstPtr(1, y + 2); // +1 for border. +1 for nextImgPtr.
			for (x = idx.x; x < idx.x + tdShr.x; x++) {

				//			//x gradient
				gxR = sqrtf(imgPtr[x + 1].x) - sqrtf(imgPtr[x - 1].x);
				gxG = sqrtf(imgPtr[x + 1].y) - sqrtf(imgPtr[x - 1].y);
				gxB = sqrtf(imgPtr[x + 1].z) - sqrtf(imgPtr[x - 1].z);

				//			//y gradient
				gyR = sqrtf(nextImgPtr[x].x) - sqrtf(prevImgPtr[x].x);
				gyG = sqrtf(nextImgPtr[x].y) - sqrtf(prevImgPtr[x].y);
				gyB = sqrtf(nextImgPtr[x].z) - sqrtf(prevImgPtr[x].z);

				//magnitude
				mR = sqrtf(gxR * gxR + gyR * gyR);
				mG = sqrtf(gxG * gxG + gyG * gyG);
				mB = sqrtf(gxB * gxB + gyB * gyB);

				mag = max(max(mR, mG), mB);
				//EXPERIMENTAL: REMOVED ABS in X
				if (mag == mR) {
					imgGradientPtr[x].x = mR;
					imgGradientPtr[x].y = atan2f(fabsf(gyR), ((gxR) + EPSILON))
									* 180 / PI; //atan(y/x) returns value in radians. NOTE: atan returns values from -pi/2 to pi/2, atan2 returns values from -pi to pi. fabsf gives absolute value. Absolute value is used according to HOG paper for unsigned orientations
				} else if (mag == mG) {
					imgGradientPtr[x].x = mG;
					imgGradientPtr[x].y = atan2f(fabsf(gyG), ((gxG) + EPSILON))
									* 180 / PI;
				} else	//mag == mB
				{
					imgGradientPtr[x].x = mB;
					imgGradientPtr[x].y = atan2f(fabsf(gyB), ((gxB) + EPSILON))
									* 180 / PI;
				}

			}
			prevImgPtr = imgPtr;
			imgPtr = nextImgPtr;

		}

		return;
	}
}
__device__ inline void CUDA::resetHistogram(HOGDescriptor& blockHist) {
	blockHist.bin[0] = 0;
	blockHist.bin[1] = 0;
	blockHist.bin[2] = 0;
	blockHist.bin[3] = 0;
	blockHist.bin[4] = 0;
	blockHist.bin[5] = 0;
	blockHist.bin[6] = 0;
	blockHist.bin[7] = 0;
	blockHist.bin[8] = 0;
	blockHist.bin[9] = 0;
	blockHist.bin[10] = 0;
	blockHist.bin[11] = 0;
	blockHist.bin[12] = 0;
	blockHist.bin[13] = 0;
	blockHist.bin[14] = 0;
	blockHist.bin[15] = 0;
	blockHist.bin[16] = 0;
	blockHist.bin[17] = 0;
	blockHist.bin[18] = 0;
	blockHist.bin[19] = 0;
	blockHist.bin[20] = 0;
	blockHist.bin[21] = 0;
	blockHist.bin[22] = 0;
	blockHist.bin[23] = 0;
	blockHist.bin[24] = 0;
	blockHist.bin[25] = 0;
	blockHist.bin[26] = 0;
	blockHist.bin[27] = 0;
	blockHist.bin[28] = 0;
	blockHist.bin[29] = 0;
	blockHist.bin[30] = 0;
	blockHist.bin[31] = 0;
	blockHist.bin[32] = 0;
	blockHist.bin[33] = 0;
	blockHist.bin[34] = 0;
	blockHist.bin[35] = 0;

}
__global__ void CUDA::computeHistogram(const Vec2* _imgGradient,
		HOGDescriptor* g_hogDsc, const uint2 _numWindows) {
	// 		Orientation binning: magnitude added to orientation bin. Orientation = atan(y/x) INTERPOLATION
	extern __shared__ HOGDescriptor s_blockHist[];
	unsigned int s_idx = threadIdx.y * blockDim.x + threadIdx.x;//index in shared block histogram array
	resetHistogram(s_blockHist[s_idx]); //explicitly sets bins to zero

	uint2 wIdx = make_uint2((blockIdx.z % _numWindows.x) * WINDOWSTRIDEX,
			(blockIdx.z / _numWindows.x) * WINDOWSTRIDEY); //Window index
	uint2 bIdx = make_uint2(blockIdx.x * BLOCKSTRIDEX,
			blockIdx.y * BLOCKSTRIDEY); // block index in a window
	uint2 pIdx = make_uint2(wIdx.x + bIdx.x + threadIdx.x,
			wIdx.y + bIdx.y + threadIdx.y); //pixel index (location) in the image;

	uint2 tdShr = make_uint2(1, 1); // for now only 1 pixel is processed per thread.
	float mag, angle, a1, a2, b1, b2, c1, c2;

	const uint2 halfCell = make_uint2(CELLSIZEX / 2, CELLSIZEY / 2);

	uint2 cellLowCen = make_uint2(wIdx.x + bIdx.x + halfCell.x,
			wIdx.y + bIdx.y + halfCell.y), cellHighCen = make_uint2(
					wIdx.x + bIdx.x + halfCell.x + CELLSIZEX,
					wIdx.y + bIdx.y + halfCell.y + CELLSIZEY);
	int lowBin, z1, z2, xy11, xy12, xy21, xy22;

	int bx = WINDOWSIZEX / NUMCELLSX, by = WINDOWSIZEY / NUMCELLSY, bz =
			ANGLERANGE / NBINS;
	const int halfBin = bz / 2.f;
	float2* imgGradientPtr;

	unsigned int y, x;
	for (y = 0; y < tdShr.y; y++) {
		imgGradientPtr = _imgGradient->getConstPtr(pIdx.x, pIdx.y + y);
		for (x = 0; x < tdShr.x; x++) {

			mag = imgGradientPtr[x].x;
			angle = imgGradientPtr[x].y;

			z1 = (angle) / (bz + EPSILON);
			lowBin = z1 * bz + halfBin;
			if (lowBin > angle) {
				lowBin -= bz;
			}
			//precompute weights
			uint2 pos = make_uint2(x + pIdx.x, y + pIdx.y);
			a1 = pos.x > cellLowCen.x ? (float) (pos.x - cellLowCen.x) / bx : 0;
			b1 = (pos.y) > cellLowCen.y ?
					(float) (pos.y - cellLowCen.y) / by : 0;
			c1 = (angle - lowBin) / bz;
			a2 = (pos.x) < cellHighCen.x ? 1 - a1 : 0;
			b2 = (pos.y) < cellHighCen.y ? 1 - b1 : 0;
			c2 = 1 - c1;

			xy11 = 0;
			xy21 = NBINS * 1;
			xy12 = NBINS * 2;
			xy22 = NBINS * 3;

			lowBin = (lowBin % ANGLERANGE + ANGLERANGE) % ANGLERANGE; // to handle negative modulo e.g. -10%180 = 170
			z1 = lowBin / bz;
			z2 = (z1 + 1) % NBINS;

			// storing trilinear interpolation and binning
			s_blockHist[s_idx].bin[xy11 + z1] += mag * a2 * b2 * c2;
			s_blockHist[s_idx].bin[xy11 + z2] += mag * a2 * b2 * c1;
			s_blockHist[s_idx].bin[xy12 + z1] += mag * a2 * b1 * c2;
			s_blockHist[s_idx].bin[xy21 + z1] += mag * a1 * b2 * c2;
			s_blockHist[s_idx].bin[xy12 + z2] += mag * a2 * b1 * c1;
			s_blockHist[s_idx].bin[xy21 + z2] += mag * a1 * b2 * c1;
			s_blockHist[s_idx].bin[xy22 + z1] += mag * a1 * b1 * c2;
			s_blockHist[s_idx].bin[xy22 + z2] += mag * a1 * b1 * c1;

		}
	}
	__syncthreads();

	//////////////////////////////////////////////////////////
	//Reduction												//
	//////////////////////////////////////////////////////////
	const unsigned int thblockSize = blockDim.x * blockDim.y;
	const unsigned int HBLOCKSIZE = NBINS * BLOCKSIZEX * BLOCKSIZEY;
	unsigned int index;
	for (unsigned int s = 1; s < thblockSize; s *= 2) {
		index = s_idx * s * 2;
		if (index < thblockSize) {
#pragma unroll 36 //static unrolling of block descriptors
			for (unsigned int i = 0; i < HBLOCKSIZE; i++)
				s_blockHist[index].bin[i] += s_blockHist[index + s].bin[i];

		}
		__syncthreads();
	}
	////////////////////////////////////////////////////////////
	//Copying final reduced block descriptor to global memory //
	////////////////////////////////////////////////////////////

	// changing indices from image coordinations to numbers. e.g. window starting at (32,128) becomes index (1,2)
	wIdx = make_uint2(wIdx.x / WINDOWSTRIDEX, wIdx.y / WINDOWSTRIDEY);
	// changing indices from image coordinations to numbers. e.g. block starting at (8,8) becomes index (1,1)
	bIdx = make_uint2(bIdx.x / BLOCKSTRIDEX, bIdx.y / BLOCKSTRIDEY);

	const unsigned int NUMBLOCKS = (NUMBLOCKSX * NUMBLOCKSY);

	index = blockIdx.z * NUMBLOCKS + (blockIdx.y * gridDim.x + blockIdx.x);
	if (s_idx < HBLOCKSIZE) {
		g_hogDsc[index].bin[s_idx] = s_blockHist[0].bin[s_idx];

	}

	return;
}
__global__ void CUDA::normalizeHistogram(HOGDescriptor* g_hogDsc) {
	////////////////////////////////////////////////////////////
	//BLOCK NORMALIZATION									  //
	////////////////////////////////////////////////////////////

	// copying histograms from global to shared memory
	__shared__ HOGDescriptor s_blockHist;
	__shared__ HOGDescriptor s_tempBlockHist;
	const unsigned int NUMBLOCKS = (NUMBLOCKSX * NUMBLOCKSY);
	unsigned int idx = blockIdx.z * NUMBLOCKS
			+ (blockIdx.y * gridDim.x + blockIdx.x);
	s_blockHist.bin[threadIdx.x] = g_hogDsc[idx].bin[threadIdx.x];
	s_tempBlockHist.bin[threadIdx.x] = s_blockHist.bin[threadIdx.x]
	                                                   * s_blockHist.bin[threadIdx.x]; //squaring each element
	__syncthreads();
	unsigned int index;

	//Calculating sum of squares using parallel reduction
	for (unsigned int s = 1; s < blockDim.x; s *= 2) {
		index = threadIdx.x * s * 2;
		if (index < blockDim.x) {
			s_tempBlockHist.bin[index] = s_tempBlockHist.bin[index]
			                                                 + s_tempBlockHist.bin[index + s];

		}
		__syncthreads();
	}

	float sumOfSqr = s_tempBlockHist.bin[0]; // saving sum of sqr in a temp variable. Must sync threads before bin[0] is modified
	__syncthreads();
	//Normalize each element and cap to 0.2

	s_tempBlockHist.bin[threadIdx.x] =
			min(
					(s_blockHist.bin[threadIdx.x]
					                 / sqrtf(sumOfSqr + EPSILON * EPSILON)),
					                 L2THRESHOLD);

	//copying first-normalized values
	s_blockHist.bin[threadIdx.x] = s_tempBlockHist.bin[threadIdx.x];
	//Squaring each element
	s_tempBlockHist.bin[threadIdx.x] *= s_tempBlockHist.bin[threadIdx.x];
	__syncthreads();

	//Calculating sum of squares using parallel reduction, again ..
	for (unsigned int s = 1; s < blockDim.x; s *= 2) {
		index = threadIdx.x * s * 2;
		if (index < blockDim.x) {
			s_tempBlockHist.bin[index] = s_tempBlockHist.bin[index]
			                                                 + s_tempBlockHist.bin[index + s];

		}
		__syncthreads();
	}

	sumOfSqr = s_tempBlockHist.bin[0]; // saving sum of sqr in a temp variable. Must sync threads before bin[0] is modified
	__syncthreads();
	//Normalize each element
	s_blockHist.bin[threadIdx.x] = (s_blockHist.bin[threadIdx.x]
	                                                / sqrtf(sumOfSqr + EPSILON * EPSILON));

	//Copy to global memory
	g_hogDsc[idx].bin[threadIdx.x] = s_blockHist.bin[threadIdx.x];

}

CUDA_CALLABLE_MEMBER CUDA_HOG::CUDA_HOG(const Image3& _img) :
				img(_img), imgGradient(img.width() - 2 * PADTHICKNESS,
						img.height() - 2 * PADTHICKNESS)

{

	numWindowsX = imgGradient.width() / WINDOWSTRIDEX - 1;
	numWindowsY = imgGradient.height() / WINDOWSTRIDEY - 1;
	hogDsc = new HOGDescriptor[numWindowsX * numWindowsY * NUMBLOCKSX
	                           * NUMBLOCKSY]; // total number of blocks. By default (7x15 blocks per window) * (number of windows in the image)

}

void CUDA_HOG::writeFeatureVector(unsigned int _windowX,
		unsigned int _windowY) {
	struct stat st;
	if (stat("GPU_features", &st) == -1) {
		mkdir("GPU_features", 0777);
	}
	std::ofstream outfile;
	std::stringstream ss1, ss2;
	ss1 << _windowX;
	ss2 << _windowY;
	unsigned int windowIdx = (_windowY * numWindowsX + _windowX) * NUMBLOCKSX
			* NUMBLOCKSY;
	std::string name = "GPU_features/vector_" + ss1.str() + "_" + ss2.str()
					+ ".txt";
	outfile.open(name.c_str());
	for (unsigned int i = 0; i < (NUMBLOCKSX * NUMBLOCKSY); i++) {
#pragma unroll 36
		for (unsigned int j = 0; j < 36; j++) {
			outfile << hogDsc[windowIdx + i].bin[j] << "\n";
		}

		//outfile << "\n==========BLOCK END ==========\n";
	}
	outfile.close();
}

void CUDA_HOG::writeGradient() {

	std::ofstream outfile;

	std::string name = "gradient.txt";
	outfile.open(name.c_str());
	float2* grdPtr;
	for (unsigned int y = 0; y < imgGradient.height(); y++) {
		grdPtr = imgGradient.getConstPtr(0, y);
		for (unsigned int x = 0; x < imgGradient.width(); x++) {
			outfile << "M: " << grdPtr[x].x << "A: " << grdPtr[x].y << "\t";
		}
		outfile << "\n";
	}
	outfile.close();
}
void CUDA_HOG::computeHOG() {
	//TODO: change kernel configs to match input. Currently works with 640x480 only
	cudaEvent_t start, stop;
	cudaEventCreate(&start);
	cudaEventCreate(&stop);

	Image3* d_img;

	// allocate and copy image object to device ==> shallow copy
	CUDA_CHECK_RETURN(cudaMalloc((void** ) &d_img, sizeof(Image3)));
	CUDA_CHECK_RETURN(
			cudaMemcpy(d_img, &(img), sizeof(Image3), cudaMemcpyHostToDevice));
	uchar3* d_imgPtr, *h_imgPtr = img.getConstPtr();

	//allocate and copy image data to device image-data pointer d_imgPtr ==>deep copy
	CUDA_CHECK_RETURN(
			cudaMalloc((void** ) &(d_imgPtr), sizeof(uchar3) * img.size()));
	CUDA_CHECK_RETURN(
			cudaMemcpy(d_imgPtr, h_imgPtr, sizeof(uchar3) * img.size(),
					cudaMemcpyHostToDevice)); //element  copy

	//copy device image-data pointer to device image member pointer
	CUDA_CHECK_RETURN(
			cudaMemcpy(&(d_img->data), &d_imgPtr, sizeof(uchar3*),
					cudaMemcpyHostToDevice));

	//////////////////////////////////////////////////////////////////////////////////////
	//Gradient calculation																//
	//////////////////////////////////////////////////////////////////////////////////////
	Vec2* d_imgGradient;
	// allocate and copy gradient vector object to device ==> shallow copy
	CUDA_CHECK_RETURN(cudaMalloc((void** ) &d_imgGradient, sizeof(Vec2)));
	CUDA_CHECK_RETURN(
			cudaMemcpy(d_imgGradient, &(imgGradient), sizeof(Vec2),
					cudaMemcpyHostToDevice));

	float2* d_imgGradientPtr;
	//allocating memory for gradient vector
	CUDA_CHECK_RETURN(
			cudaMalloc((void** ) &(d_imgGradientPtr),
					sizeof(float2) * imgGradient.size()));

	//copy gradient pointer to the member pointer of the gradient object
	CUDA_CHECK_RETURN(
			cudaMemcpy(&(d_imgGradient->data), &d_imgGradientPtr,
					sizeof(float2*), cudaMemcpyHostToDevice));
	dim3 gridSize = dim3(20, 20, 1);
	dim3 blockSize = dim3(32, 24, 1);

	cudaEventRecord(start);
	CUDA::computeGradient<<<gridSize, blockSize>>>(d_img, d_imgGradient);
	cudaEventRecord(stop);
	CUDA_CHECK_RETURN(cudaEventSynchronize(stop));
	float milliseconds = 0;
	cudaEventElapsedTime(&milliseconds, start, stop);
	printf("Time for gradient kernel: %f ms\n", milliseconds);
	CUDA_CHECK_RETURN(cudaThreadSynchronize());

	CUDA_CHECK_RETURN(
			cudaMemcpy((imgGradient.data), (d_imgGradientPtr),
					sizeof(float2) * imgGradient.size(),
					cudaMemcpyDeviceToHost))
	CUDA_CHECK_RETURN(cudaGetLastError());

	//////////////////////////////////////////////////////////////////////////////////////
	//Histogram computation																//
	//////////////////////////////////////////////////////////////////////////////////////
	HOGDescriptor* d_hogDsc;
	//Allocating memory for HOG descriptor
	size_t totalBlockNum = numWindowsX * numWindowsY * NUMBLOCKSX * NUMBLOCKSY;
	CUDA_CHECK_RETURN(
			cudaMalloc((void** )&d_hogDsc,
					sizeof(HOGDescriptor) * totalBlockNum));

	//explicit initialization by zero
	CUDA_CHECK_RETURN(
			cudaMemset(d_hogDsc, 0, sizeof(HOGDescriptor) * totalBlockNum));

	gridSize = dim3(NUMBLOCKSX, NUMBLOCKSY, numWindowsX * numWindowsY);	//hog.numWindowsX*hog.numWindowsY thread block per each hog block. z dimension has number of windows per image
	blockSize = dim3(CELLSIZEX * BLOCKSIZEX, CELLSIZEY * BLOCKSIZEY, 1);// thread per pixel
	uint2 numWindows = make_uint2(numWindowsX, numWindowsY);
	cudaEventRecord(start);
	CUDA::computeHistogram<<<gridSize,blockSize,sizeof(HOGDescriptor)*blockSize.x*blockSize.y>>>(d_imgGradient, d_hogDsc, numWindows );
	cudaEventRecord(stop);
	CUDA_CHECK_RETURN(cudaEventSynchronize(stop));
	cudaEventElapsedTime(&milliseconds, start, stop);
	printf("Time for histogram kernel: %f ms\n", milliseconds);

	CUDA_CHECK_RETURN(cudaThreadSynchronize());
	CUDA_CHECK_RETURN(cudaGetLastError());

	CUDA_CHECK_RETURN(
			cudaMemcpy(hogDsc, d_hogDsc, sizeof(HOGDescriptor) * totalBlockNum,
					cudaMemcpyDeviceToHost));

	//////////////////////////////////////////////////////////////////////////////////////
	//Histogram normalization															//
	//////////////////////////////////////////////////////////////////////////////////////
	blockSize = dim3(NBINS * BLOCKSIZEX * BLOCKSIZEY, 1, 1); // thread per histogram bin. by default 36 threads
	cudaEventRecord(start);
	CUDA::normalizeHistogram<<<gridSize, blockSize>>>(d_hogDsc);
	cudaEventRecord(stop);
	CUDA_CHECK_RETURN(cudaEventSynchronize(stop));
	cudaEventElapsedTime(&milliseconds, start, stop);
	printf("Time for normalization kernel: %f ms\n", milliseconds);

	CUDA_CHECK_RETURN(cudaThreadSynchronize());
	CUDA_CHECK_RETURN(cudaGetLastError());

	CUDA_CHECK_RETURN(
			cudaMemcpy(hogDsc, d_hogDsc, sizeof(HOGDescriptor) * totalBlockNum,
					cudaMemcpyDeviceToHost));

	unsigned int x, y;
	for (y = 0; y < numWindows.y; y++) {
		for (x = 0; x < numWindows.x; x++) {
			writeFeatureVector(x, y);

		}
	}
	writeGradient();
	cudaEventDestroy(start);
	cudaEventDestroy(stop);
	cudaFree(d_img);
	cudaFree(d_imgPtr);
	cudaFree(d_imgGradient);
	cudaFree(d_imgGradientPtr);
	cudaFree(d_hogDsc);

}

CUDA_HOG::~CUDA_HOG() {

	delete[] hogDsc;
	hogDsc = 0;
}
