#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

void main()
{
	Mat src = imread("len_top.jpg", IMREAD_GRAYSCALE);

	imshow("Src", src);
	waitKey(0);
	printf("---src.isContinuous=%d\n", src.isContinuous());
	printf("Row:%d, Col:%d\n", src.rows, src.cols);
	printf("Type:%d\n", src.type());
	printf("CV_8UC3:%d\n", CV_8UC3);
	printf("CV_8UC1:%d\n", CV_8UC1);
	Mat_<uchar>::iterator SrcStart = src.begin<uchar>();
	Mat_<uchar>::iterator SrcEnd   = src.end<uchar>();
	int number = 0;
	for (;SrcStart != SrcEnd; ++SrcStart)
	{
		uchar data = *SrcStart;

		printf("Image index:%d, value:%d\n", number, data);
		number++;
	}

	printf("Image count:%d\n", number);
}