//=======================================================================
// Copyright Ahmed Magdi Osman 2015.
// Distributed under the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

/*
 * Vec2.cu
 *
 *  Created on: Oct 16, 2014
 *      Author: Ahmed M. Osman
 */
#include "Vec2.hpp"

CUDA_CALLABLE_MEMBER Vec2::Vec2(int width, int height) {
	imWidth = width;
	imHeight = height;
	imSize = imWidth * imHeight;
	data = new float2[imSize];
}

CUDA_CALLABLE_MEMBER Vec2::Vec2() {
	data = 0;
	imHeight = 0;
	imWidth = 0;
	imSize = 0;

}

CUDA_CALLABLE_MEMBER Vec2::Vec2(const Vec2& _vec)

{

	imWidth = _vec.width();
	imHeight = _vec.height();
	imSize = imWidth * imHeight;
	data = new float2[imSize];

	//Copy elements
	const float2* _vecPtr = _vec.getConstPtr();
	unsigned int i = 0;
	for (i = 0; i < imSize; i++) {
		data[i].x = _vecPtr[i].x;
		data[i].y = _vecPtr[i].y;

	}
}

CUDA_CALLABLE_MEMBER Vec2::~Vec2() {
	delete[] data;
	data = 0;	//Set pointer to NULL
}
