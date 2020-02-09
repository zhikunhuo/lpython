#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


void main()
{
	cv::AutoBuffer<int, 10> buf; //������һ������1000 float�Զ�������
	
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