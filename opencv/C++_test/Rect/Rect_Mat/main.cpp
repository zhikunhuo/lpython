#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;

void main()
{
	Mat srcImage = imread("len_top.jpg");
	printf("Image height:%d, width:%d\n", srcImage.rows, srcImage.cols);
	imshow("Image", srcImage);
	waitKey(0);

	Mat dstImage(srcImage, Rect(50, 50, 250, 150));
	imshow("Rect Image", dstImage);
	waitKey(0);

}