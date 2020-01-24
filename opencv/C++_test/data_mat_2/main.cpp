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
	uchar * Data = src.data;
	
	for (int RowIndex=0; RowIndex <  src.rows; ++RowIndex)
		for(int ColIndex=0;ColIndex< src.cols; ++ColIndex)
	{
	    printf("B : Row: %d, Col: %d, Value: %d\n", RowIndex, ColIndex, *(Data + RowIndex * src.cols*3 + ColIndex));
		printf("G : Row: %d, Col: %d, Value: %d\n", RowIndex, ColIndex, *(Data + RowIndex * src.cols * 3 + ColIndex + 1));
		printf("R : Row: %d, Col: %d, Value: %d\n", RowIndex, ColIndex, *(Data + RowIndex * src.cols * 3 + ColIndex + 2));
	}


}