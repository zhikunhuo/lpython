#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


void main()
{
	cv::AutoBuffer<int, 10> buf; //　创建一个包含1000 float自动缓冲区
	
	int *Dst = buf.data();

	for (int i = 0; i < 10; i++)
	{
		Dst[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "Index: " << i << ",value: " << buf[i] << endl;
	}
}