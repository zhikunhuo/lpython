#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

void main()
{
	Mat src = imread("len_top.jpg");
	imshow("Src", src);
	waitKey(0);
	printf("---src.isContinuous=%d\n", src.isContinuous());
	printf("Row:%d, Col:%d\n", src.rows, src.cols);
	Rect rect(1, 1,100,100);
	Mat crop_img = src(rect);
	imshow("crop_img", crop_img);
	waitKey(0);
	printf("Row:%d, Col:%d\n", crop_img.rows, crop_img.cols);
	printf("---crop_img.isContinuous=%d\n", crop_img.isContinuous());

	Mat crop_img2 = crop_img.clone();
	printf("---crop_img2.isContinuous=%d\n", crop_img2.isContinuous());
}