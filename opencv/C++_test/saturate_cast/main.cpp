#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

void main()
{
	uchar Vxy = 10;

	uchar result = ((10 - 128) * 2 + 128);
	char result3 = (Vxy + 256);

	uchar result2 = cv::saturate_cast<uchar>((10 - 128) * 2 + 128);
	uchar result4 = cv::saturate_cast<uchar>((Vxy + 256));

	printf("result: %d\n", result);
	printf("result2: %d\n", result2);
	printf("result3: %d\n", result3);
	printf("result4: %d\n", result4);
}