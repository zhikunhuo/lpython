#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


void main()
{
	cout << "CPU features : " << getCPUFeaturesLine() << endl;
}