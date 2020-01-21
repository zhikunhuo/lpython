#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

void main()
{
	Mat srcImage = imread("rgb_C.png", IMREAD_GRAYSCALE);

	imshow("src_Image", srcImage);
	waitKey(0);

#if 0
	Mat dstImage, edge, grayImage;

	//blur(srcImage, dstImage, Size(7,7));
	dstImage.create(srcImage.size(), srcImage.type());
	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);

	blur(grayImage, edge, Size(3, 3));
	Canny(edge, edge, 3, 9, 3);
	imshow("Edge_Image", edge);
	waitKey(0);
#endif
}