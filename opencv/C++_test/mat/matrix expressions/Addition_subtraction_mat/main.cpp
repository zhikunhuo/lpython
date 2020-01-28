#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


void main()
{
	Mat A(3, 3, CV_32FC1);
	Mat B(3, 3, CV_32FC1);
	
	A.at<float>(0, 0) = 1;
	A.at<float>(0, 1) = 2;
	A.at<float>(0, 2) = 3;
	A.at<float>(1, 0) = 4;
	A.at<float>(1, 1) = 5;
	A.at<float>(1, 2) = 6;
	A.at<float>(2, 0) = 1;
	A.at<float>(2, 1) = 2;
	A.at<float>(2, 2) = 3;


	B.at<float>(0, 0) = 3;
	B.at<float>(0, 1) = 2;
	B.at<float>(0, 2) = 1;
	B.at<float>(1, 0) = 6;
	B.at<float>(1, 1) = 5;
	B.at<float>(1, 2) = 4;
	B.at<float>(2, 0) = 1;
	B.at<float>(2, 1) = 2;
	B.at<float>(2, 2) = 3;
	cout << "A = "<<endl<<  A<< endl;
	cout << "B= "  <<endl<< B << endl;
	cout << "A+B = "  <<endl<< A+B << endl;
	cout << "A-B = " << endl << A - B << endl;

}