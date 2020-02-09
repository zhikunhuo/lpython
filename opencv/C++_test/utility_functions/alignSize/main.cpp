#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


void main()
{
	printf("Align size: %d\n", cv::alignSize(100, 64));
}