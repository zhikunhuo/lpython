#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


void main()
{
	double test  = 0x7FF0000000000000;
	double test1 = 0x7FF0000000002340;
	double test2 = 0x2330000000002340;
	double test3 = 1.1;

	cout << "cvIsNaN(test) : " << cvIsNaN(test) << endl;
	cout << "cvIsNaN(test1) : " << cvIsNaN(test1) << endl;
	cout << "cvIsNaN(test2) : " << cvIsNaN(test2) << endl;
	cout << "cvIsNaN(test3) : " << cvIsNaN(test3) << endl;
}