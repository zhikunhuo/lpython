#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	Matx33f m0 = Matx33f::all(10);

	cout << "m0=:" << m0 << endl;
}