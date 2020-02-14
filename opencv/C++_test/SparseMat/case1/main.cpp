#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;



void main()
{
	const int dims = 2;
	int size[dims] = { 10, 10 };
    
	int number = 0;

	cv::SparseMat sm;
	cv::SparseMat sm1(dims, size, CV_8U);
	cv::SparseMat sm2(sm1);
    cv:Mat  m1(460, 480, CV_8UC1);
	cv::SparseMat sm3(m1);
}