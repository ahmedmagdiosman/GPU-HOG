//=======================================================================
// Copyright Ahmed Magdi Osman 2015.
// Distributed under the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

/*
 * Vec2.hpp
 *
 *  Created on: Oct 16, 2014
 *      Author: Ahmed M. Osman
 */

#ifndef VEC2_HPP_
#define VEC2_HPP_

#ifdef __CUDACC__
#define CUDA_CALLABLE_MEMBER	 __device__ __host__
#else
#define CUDA_CALLABLE_MEMBER
#endif

#include "CImg.h"
using namespace cimg_library;

class Vec2 {
public:

	CUDA_CALLABLE_MEMBER inline int width() const;CUDA_CALLABLE_MEMBER inline int height() const;CUDA_CALLABLE_MEMBER inline size_t size() const;CUDA_CALLABLE_MEMBER inline float2* getConstPtr() const;CUDA_CALLABLE_MEMBER inline float2* getPtr();CUDA_CALLABLE_MEMBER inline float2* getPtr(
			unsigned int x, unsigned int y);CUDA_CALLABLE_MEMBER inline float2* getConstPtr(
					unsigned int x, unsigned int y) const;CUDA_CALLABLE_MEMBER inline float2 get(
							unsigned int x, unsigned int y) const;CUDA_CALLABLE_MEMBER Vec2(
									const Vec2& _vec);
							//Vec2(CImg<float> _img, bool border, int numchannels = 3);
							CUDA_CALLABLE_MEMBER Vec2(int width, int height);CUDA_CALLABLE_MEMBER Vec2();CUDA_CALLABLE_MEMBER ~Vec2();

							//private:
							float2* data;
							int imWidth;
							int imHeight;
							size_t imSize;

};

CUDA_CALLABLE_MEMBER inline float2 Vec2::get(unsigned int x,
		unsigned int y) const {
	//TODO check for out of bounds without overhead
	// c: channel -> R,G,B = 0,1,2 respectively
	//WARNING: IF BORDER IS ADDED SHIFT both x and y by 1
	return data[y * imWidth + x];
}

CUDA_CALLABLE_MEMBER inline int Vec2::width() const {
	return imWidth;
}
CUDA_CALLABLE_MEMBER inline int Vec2::height() const {
	return imHeight;
}
CUDA_CALLABLE_MEMBER inline size_t Vec2::size() const {
	return imSize;
}

CUDA_CALLABLE_MEMBER inline float2* Vec2::getConstPtr() const {
	return data;
}

CUDA_CALLABLE_MEMBER inline float2* Vec2::getPtr() {
	return data;
}

CUDA_CALLABLE_MEMBER inline float2* Vec2::getPtr(unsigned int x,
		unsigned int y) {
	return &data[y * imWidth + x];
}
CUDA_CALLABLE_MEMBER inline float2* Vec2::getConstPtr(unsigned int x,
		unsigned int y) const {
	return &data[y * imWidth + x];
}

#endif /* VEC2_HPP_ */
