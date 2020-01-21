#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

void main()
{
	Mat srcImage = imread("rgb_C.png");

	imshow("src_Image", srcImage);
	waitKey(0);

	Mat dstImage;

	blur(srcImage, dstImage, Size(7,7));
	imshow("Dst_Image", dstImage);
	waitKey(0);
}