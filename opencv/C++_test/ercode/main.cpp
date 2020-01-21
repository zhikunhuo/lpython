#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;

void main()
{
	Mat srcImage = imread("rgb_C.png");

	imshow("src_Image", srcImage);
	waitKey(0);

	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;

	erode(srcImage, dstImage, element);
	imshow("Dst_Image", dstImage);
	waitKey(0);
}