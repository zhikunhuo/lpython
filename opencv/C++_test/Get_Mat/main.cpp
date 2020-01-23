#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

void main()
{

	Mat test2;
	test2.create(Size(320,240), CV_8UC3);
	printf("Test2 col:%d, row:%d,dims:%d\n", test2.cols, test2.rows, test2.dims);
	printf("Test2 elemsize:%d, elemsize1:%d\n", test2.elemSize(), test2.elemSize1());
	printf("Test2 type:%d\n", test2.type());
	printf("Test2 depth:%d\n", test2.depth());
	printf("Test2 channels: %d\n", test2.channels());
	if (test2.empty())
	{
		printf("Test2 is empty\n");
	}
	else {
		printf("Test2 is not empty\n");
	}

	printf("Test2 total:%d\n", test2.total());
	printf("Test2 size:%d\n", *test2.size.p);
	printf("Test2 width:%d\n", test2.size().width);
	printf("Test2 height:%d\n", test2.size().height);
	printf("Test2 dim:%d\n", test2.size.dims());
}