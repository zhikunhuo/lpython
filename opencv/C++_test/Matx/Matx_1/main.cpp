#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	Matx33f m0(1, 2, 3, 4, 5, 6, 7, 8, 9);

	cout << "m0=:" << m0 << endl;
}