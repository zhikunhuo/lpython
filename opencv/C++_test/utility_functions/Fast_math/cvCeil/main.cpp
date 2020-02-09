#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


void main()
{
	cout << "value1 : " << cvCeil(3.2) << endl;
	cout << "value2 : " << cvCeil(3.9) << endl;
}