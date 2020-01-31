#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	Matx33f m0 = Matx33f::ones();
	Matx33f m1 = Matx33f::zeros();
	Matx33f m2 = Matx33f::eye();

	cout << "m0=:" << m0 << endl;
	cout << "m1=:" << m1 << endl;
	cout << "m2=:" << m2 << endl;
}