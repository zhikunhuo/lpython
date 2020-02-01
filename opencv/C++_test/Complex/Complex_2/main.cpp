#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	Complexf cf1;
	Complexf cf2(12.1, 3124.23);
	

	cf1.re = 3297;
	cf1.im = 3534.2343;
	cout << "cf1 = " << cf1 << endl;
	cout << "cf2 = " << cf2<< endl;

	cout << "(cf1+cf2) = " << (cf1 + cf2) << endl;
	cf2 += cf1;
	cout << "cf2 += cf1 = " << cf2 << endl;

	cout << "(cf2 - cf1) = " << (cf2 - cf1) << endl;

	cout << "cf1 *2 = " << cf1 *(float)2.0 << endl;
	cout << "cf1 *cf2 = " << cf1 *cf2 << endl;
	cout << "cf1 /cf2 = " << cf1 /cf2 << endl;
}