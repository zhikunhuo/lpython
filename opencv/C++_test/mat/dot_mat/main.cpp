#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


void main()
{
	Mat A(3, 3, CV_8UC1, Scalar(0));
	Mat B(3, 3, CV_8UC1, Scalar(0));
	
	A.at<unsigned char>(0, 0) = 1;
	A.at<unsigned char>(0, 1) = 2;
	A.at<unsigned char>(0, 2) = 3;
	A.at<unsigned char>(1, 0) = 4;
	A.at<unsigned char>(1, 1) = 5;
	A.at<unsigned char>(1, 2) = 6;
	A.at<unsigned char>(2, 0) = 7;
	A.at<unsigned char>(2, 1) = 8;
	A.at<unsigned char>(2, 2) = 9;


	B.at<unsigned char>(0, 0) = 3;
	B.at<unsigned char>(0, 1) = 2;
	B.at<unsigned char>(0, 2) = 1;
	B.at<unsigned char>(1, 0) = 6;
	B.at<unsigned char>(1, 1) = 5;
	B.at<unsigned char>(1, 2) = 4;
	B.at<unsigned char>(2, 0) = 9;
	B.at<unsigned char>(2, 1) = 8;
	B.at<unsigned char>(2, 2) = 7;
	cout << "A = " << endl << A<< endl;
	cout << "B= " << endl << B << endl;
	cout << "A.dot(B)= "  << A.dot(B) << endl;

}