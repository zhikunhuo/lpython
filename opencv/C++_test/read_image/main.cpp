#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;

void main()
{
	Mat srcImage = imread("rgb_C.png");

	imshow("Image", srcImage);
	waitKey(0);
}