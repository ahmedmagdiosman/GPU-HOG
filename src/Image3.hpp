//=======================================================================
// Copyright Ahmed Magdi Osman 2015.
// Distributed under the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

/*
 * Image3.hpp
 *
 *  Created on: Oct 16, 2014
 *      Author: Ahmed M. Osman
 */

#ifndef IMAGE3_HPP_
#define IMAGE3_HPP_

#include "CImg.h"
using namespace cimg_library;

#ifdef __CUDACC__
#define CUDA_CALLABLE_MEMBER	 __device__ __host__
#else
#define CUDA_CALLABLE_MEMBER
#endif

const int BORDERTHICKNESS = 1;

class Image3 {
public:

	CUDA_CALLABLE_MEMBER inline int width() const;CUDA_CALLABLE_MEMBER inline int height() const;CUDA_CALLABLE_MEMBER inline size_t size() const;CUDA_CALLABLE_MEMBER inline uchar3* getConstPtr() const;CUDA_CALLABLE_MEMBER inline uchar3* getPtr();CUDA_CALLABLE_MEMBER inline uchar3* getPtr(
			unsigned int x, unsigned int y);CUDA_CALLABLE_MEMBER inline uchar3* getConstPtr(
					unsigned int x, unsigned int y) const;
			//CUDA_CALLABLE_MEMBER inline void setPtr(uchar3* _d); //WARNING!!! CAUSES MEMORY LEAK IF IMAGE HAS BEEN ALREADY ALLOCATED. ONLY CALL ON INSTANCES WITH NO DATA!
			inline uchar3*& getImgRef();CUDA_CALLABLE_MEMBER inline uchar3 get(
					unsigned int x, unsigned int y) const;
			//	inline float getROI(int x, int y, int c);
			CUDA_CALLABLE_MEMBER Image3(const Image3& _img);
			Image3(const CImg<unsigned char> &_img, bool border);CUDA_CALLABLE_MEMBER Image3(
					int width, int height);CUDA_CALLABLE_MEMBER Image3();CUDA_CALLABLE_MEMBER ~Image3();

			//private:
			uchar3* data;
			int imWidth;
			int imHeight;
			size_t imSize;

};

inline uchar3*& Image3::getImgRef()

{
	return data;
}

CUDA_CALLABLE_MEMBER inline uchar3 Image3::get(unsigned int x,
		unsigned int y) const {
	//TODO check for out of bounds without overhead
	// c: channel -> R,G,B = 0,1,2 respectively
	//WARNING: IF BORDER IS ADDED SHIFT both x and y by 1
	return data[y * imWidth + x];
}

//inline float Image3::getROI(int x, int y, int c)
//{
//return this->data[]
//}

//CUDA_CALLABLE_MEMBER inline void Image3::setPtr(uchar3* _d)
//{
//	//WARNING!!! CAUSES MEMORY LEAK IF IMAGE HAS BEEN ALREADY ALLOCATED. ONLY CALL ON INSTANCES WITH NO DATA!
//	data = _d;
//
//}
CUDA_CALLABLE_MEMBER inline int Image3::width() const {
	return imWidth;
}
CUDA_CALLABLE_MEMBER inline int Image3::height() const {
	return imHeight;
}
CUDA_CALLABLE_MEMBER inline size_t Image3::size() const {
	return imSize;
}

CUDA_CALLABLE_MEMBER inline uchar3* Image3::getConstPtr() const {
	return data;
}

CUDA_CALLABLE_MEMBER inline uchar3* Image3::getPtr() {
	return data;
}

CUDA_CALLABLE_MEMBER inline uchar3* Image3::getPtr(unsigned int x,
		unsigned int y) {
	return &(data[y * imWidth + x]);
}
CUDA_CALLABLE_MEMBER inline uchar3* Image3::getConstPtr(unsigned int x,
		unsigned int y) const {
	return &(data[y * imWidth + x]);
}

#endif /* IMAGE3_HPP_ */
