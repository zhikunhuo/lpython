#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


void main()
{
	double test  = 0x7FF0000000000000;
	double test1 = 0x7FF0000000002340;
	double test2 = 0x2330000000002340;
	double test3 = 1/3;

	cout << "cvIsNaN(test) : " << cvIsInf(test) << endl;
	cout << "cvIsNaN(test1) : " << cvIsInf(test1) << endl;
	cout << "cvIsNaN(test2) : " << cvIsInf(test2) << endl;
	cout << "cvIsNaN(test3) : " << cvIsInf(1/3) << endl;
}