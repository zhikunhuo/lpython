#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


void main()
{
	cout << "value1 : " << cvRound(3.14) << endl;
	cout << "value2 : " << cvRound(3.9) << endl;
	cout << "value3 : " << cvRound(-3.9) << endl;
}