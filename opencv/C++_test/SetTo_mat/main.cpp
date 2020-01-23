#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

void main()
{
	Mat src(4, 4, CV_8UC1, Scalar(23));
	cout << "src= " << endl << " " << src << endl << endl;
	Mat mask(4, 4, CV_8UC1, Scalar(0));
	src.setTo(100, mask);
	cout << "src= " << endl << " " << src << endl << endl;
	Mat mask2(4, 4, CV_8UC1, Scalar(1));
	src.setTo(100, mask2);
	cout << "src= " << endl << " " << src << endl << endl;
	src.setTo(20, src<200);
	cout << "src= " << endl << " " << src << endl << endl;
}