#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


void main()
{
	Mat src(3, 3, CV_8UC1, Scalar(0));
	
	cout << "Src= " << endl << src << endl;
	Mat  dst = src;

	dst.at<unsigned char>(0, 0) = 1;
	dst.at<unsigned char>(0, 1) = 2;
	dst.at<unsigned char>(0, 2) = 3;
	cout << "dst = " << endl << dst << endl;
	cout << "Src= " << endl << src << endl;

}