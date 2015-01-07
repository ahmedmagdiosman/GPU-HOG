//=======================================================================
// Copyright Ahmed Magdi Osman 2015.
// Distributed under the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

/*
 * main.cu
 *
 *  Created on: Oct 27, 2014
 *      Author: Ahmed M. Osman
 */

#include <stdio.h>
#include <stdlib.h>
#include "CImg.h"
#include "Image3.hpp"
#include "Vec2.hpp"
#include  "CUDA_HOG.hpp"
using namespace cimg_library;

int main(int argc, char* argv[]) {

	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << "[IMAGE NAME]" << std::endl;

		return 1;
	}

	//Reads image
	CImg<unsigned char> srcImg(argv[1]);

	//Convert from CImg class to a simple handmade class.
	Image3 img = Image3(srcImg, true); // 'true' pads the image
	//Initialize HOG instance
	CUDA_HOG hog = CUDA_HOG(img);
	//Compute a sliding window HOG on the default image scale with default parameters of [Dalal 2005]
	hog.computeHOG();

	//	//TODO: FIX FOR SMALLER IMAGES. CURRENTLY FAILS KERNEL LAUNCH
	//	srcImg.resize_halfXY();
	//	Image3 halfImg = Image3(srcImg, true);
	//	CUDA_HOG halfHog = CUDA_HOG(halfImg);
	//	halfHog.computeHOG();
	//
	//	srcImg.resize_halfXY();
	//	Image3 qrtImg = Image3(srcImg, true);
	//	CUDA_HOG qrtHog = CUDA_HOG(qrtImg);
	//	qrtHog.computeHOG();

	cudaDeviceReset();

	return 0;
}
