//=======================================================================
// Copyright Ahmed Magdi Osman 2015.
// Distributed under the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

/*
 * Image3.cu
 *
 *  Created on: Oct 16, 2014
 *      Author: Ahmed M. Osman
 */

#include "Image3.hpp"

CUDA_CALLABLE_MEMBER Image3::Image3(int width, int height) {
	imWidth = width;
	imHeight = height;
	imSize = imWidth * imHeight;
	data = new uchar3[imSize];
}

Image3::Image3(const CImg<unsigned char>& _img, bool border) {
	//Creates an Image3 instance of a CImg datatype
	//border creates a border with 1 pixel width
	// TODO: make the border thickness a parameter
	if (border) {
		imWidth = _img.width() + 2 * BORDERTHICKNESS;
		imHeight = _img.height() + 2 * BORDERTHICKNESS;
		imSize = imWidth * imHeight;
		data = new uchar3[imSize](); //() initializes elements to zero

		//Copy elements
		int j = imWidth + BORDERTHICKNESS, x = 0, y = 0;
		for (; y < _img.height(); y++) {

			for (x = 0; x < _img.width(); x++, j++) {
				data[j].x = _img(x, y, 0, 0);
				data[j].y = _img(x, y, 0, 1);
				data[j].z = _img(x, y, 0, 2);

			}
			j += 2 * BORDERTHICKNESS;	//Shift 2 border pixels
			//	j = (y + 2) *  imWidth * NUMCHANNELS + NUMCHANNELS;	// Same thing but  just more complicated
		}
	} else {
		imWidth = _img.width();
		imHeight = _img.height();
		imSize = imWidth * imHeight;
		data = new uchar3[imSize];

		//Copy elements
		unsigned int i = 0, x = 0, y = 0;
		for (; i < imSize; i++) {
			x = i % imWidth;
			y = i / imWidth;
			data[i].x = _img(x, y, 0, 0);
			data[i].y = _img(x, y, 0, 1);
			data[i].z = _img(x, y, 0, 2);
		}
	}
}

CUDA_CALLABLE_MEMBER Image3::Image3() {
	data = 0;
	imHeight = 0;
	imWidth = 0;
	imSize = 0;

}

CUDA_CALLABLE_MEMBER Image3::Image3(const Image3& _img)

{

	imWidth = _img.width();
	imHeight = _img.height();
	imSize = imWidth * imHeight;
	data = new uchar3[imSize];

	//Copy elements
	const uchar3* _imgPtr = _img.getConstPtr();
	unsigned int i = 0;
	for (i = 0; i < imSize; i++) {
		data[i].x = _imgPtr[i].x;
		data[i].y = _imgPtr[i].y;
		data[i].z = _imgPtr[i].z;
	}
}

CUDA_CALLABLE_MEMBER Image3::~Image3() {
	delete[] data;
	data = 0;	//Set pointer to NULL
}
