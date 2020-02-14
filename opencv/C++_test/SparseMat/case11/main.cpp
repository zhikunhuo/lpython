#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;



void main()
{
    cv:Mat  m1(460, 480, CV_8UC1);
	cv::SparseMat sm1(m1);
	
	cout << "sm1 element number:" << sm1.nzcount() << endl;
}