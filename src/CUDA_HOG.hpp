//=======================================================================
// Copyright Ahmed Magdi Osman 2015.
// Distributed under the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

/*
 * CUDA_HOG.hpp
 *
 *  Created on: Oct 27, 2014
 *      Author: Ahmed M. Osman
 */

#ifndef CUDA_HOG_HPP_
#define CUDA_HOG_HPP_

#include <algorithm>
#include "Image3.hpp"
#include "Vec2.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#define PI 3.14159265
const int PADTHICKNESS = 1;
const float EPSILON = 0.000001;
const unsigned int RGBCHANNELS = 3;
const int DRVCHANNELS = 2;
const unsigned int NBINS = 9;
const unsigned int ANGLERANGE = 180;
const unsigned int CELLSIZEX = 8;
const unsigned int CELLSIZEY = 8;
const unsigned int BLOCKSIZEX = 2;
const unsigned int BLOCKSIZEY = 2;
const unsigned int BLOCKSTRIDEX = CELLSIZEX;
const unsigned int BLOCKSTRIDEY = CELLSIZEY;
const unsigned int WINDOWSIZEX = 64;
const unsigned int WINDOWSIZEY = 128;
const unsigned int WINDOWSTRIDEX = WINDOWSIZEX / 2;
const unsigned int WINDOWSTRIDEY = WINDOWSIZEY / 2;
const unsigned int NUMCELLSX = WINDOWSIZEX / CELLSIZEX;
const unsigned int NUMCELLSY = WINDOWSIZEY / CELLSIZEY;
const unsigned int NUMBLOCKSX = NUMCELLSX - 1;
const unsigned int NUMBLOCKSY = NUMCELLSY - 1;
const unsigned int NUMHIST = WINDOWSIZEX / CELLSIZEX * WINDOWSIZEY / CELLSIZEY;
const float L2THRESHOLD = 0.2;

using namespace std;

typedef struct {
	float bin[NBINS * BLOCKSIZEX * BLOCKSIZEY];
} HOGDescriptor;

class CUDA_HOG {

public:
	CUDA_CALLABLE_MEMBER CUDA_HOG(const Image3& _img);

	void computeHOG();

	CUDA_CALLABLE_MEMBER ~CUDA_HOG();

private:
	Image3 img;
	Vec2 imgGradient;
	HOGDescriptor* hogDsc; // Final vector for default config is 7 blocks*15 blocks* 2x2 cells*9 bins = 3780 elements per window
	unsigned int numWindowsX;
	unsigned int numWindowsY;
	const unsigned int ftrSize = (NUMBLOCKSX * NUMBLOCKSY * BLOCKSIZEX
			* BLOCKSIZEY * NBINS);

	CUDA_CALLABLE_MEMBER void normalizeBlock(unsigned int _windowX,
			unsigned int _windowY);
	void writeFeatureVector(unsigned int _windowX, unsigned int _windowY);
	void writeGradient();

};

namespace CUDA

{
__global__ void computeGradient(const Image3* _img, Vec2* _imgGradient);
__global__ void computeHistogram(const Vec2* _imgGradient,
		HOGDescriptor* g_hogDsc, const uint2 _numWindows);
__device__ inline void resetHistogram(HOGDescriptor& blockHist); // no need for inline qualifier. should be automatically inlined
__global__ void normalizeHistogram(HOGDescriptor* g_hogDsc);
}
#endif /* CUDA_HOG_HPP_ */
