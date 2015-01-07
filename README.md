# CUDA HOG

An GPU implementation of Histogram of Oriented Gradients [Dalal 2005] with the default parameters. The algorithm uses a sliding window on the image to generate the histograms. The feature vectors is saved under "GPU_features" and the gradient magnitude-and-angle calculation step is saved in "gradient.txt", it's not pretty though :P

## Installation

Make sure X11 libraries are installed. They are needed for CImg to compile.
Run the included makefiles (in Release/Debug).

## Usage
Run:
./Debug/HOGCUDA [image name]
or
./Release/HOGCUDA [image name]

## Bugs
Gaussian weights for the block edges are not implemented.
Kernel fails to launch for tiny images.

## Environment
Compiled with Nsight with gcc 4.8, CUDA 6.5, NVIDIA driver 340.65 
Debian Jessie (testing) on a GTX 780

## License

Distributed under the MIT License.
See accompanying file LICENSE or copy at
http://opensource.org/licenses/MIT
