#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	float matx_value[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	Matx33f m0(matx_value);

	cout << "m0=:" << m0 << endl;
}