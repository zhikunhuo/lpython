#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


void main()
{
	Mat A(1, 3, CV_32FC3);
	Mat B(1, 3, CV_32FC3);
	
	A.at<float>(0, 0,0) = 1;
	A.at<float>(0, 1,0) = 2;
	A.at<float>(0, 2,0) = 3;
	


	B.at<float>(0, 0,0) = 3;
	B.at<float>(0, 1,0) = 2;
	B.at<float>(0, 2,0) = 1;
	
	cout << "A = "<<endl<<  A<< endl;
	cout << "B= "  <<endl<< B << endl;
	cout << "A.cross(B)= "  <<endl<< A.cross(B)<< endl;
	

}