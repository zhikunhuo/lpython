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
	printf("Type:%d\n", src.type());
	printf("CV_8UC3:%d\n", CV_8UC3);
	printf("CV_8UC1:%d\n", CV_8UC1);
	Mat_<cv::Vec3b>::iterator SrcStart = src.begin<cv::Vec3b>();
	Mat_<cv::Vec3b>::iterator SrcEnd   = src.end<cv::Vec3b>();
	int number = 0;
	for (;SrcStart != SrcEnd; ++SrcStart)
	{
		printf("Image index:%d, B value:%d\n", number, (*SrcStart)[0]);
		printf("Image index:%d, G value:%d\n", number, (*SrcStart)[1]);
		printf("Image index:%d, R value:%d\n", number, (*SrcStart)[2]);
		number++;
	}

	printf("Image count:%d\n", number);
}