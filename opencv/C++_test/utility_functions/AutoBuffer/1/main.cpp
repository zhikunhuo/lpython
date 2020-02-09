#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


void main()
{
	cv::AutoBuffer<int, 10> buf; //������һ������1000 float�Զ�������
	
	cv::AutoBuffer<int, 10> buf2;
	int *Dst = buf.data();

	for (int i = 0; i < 10; i++)
	{
		Dst[i] = i;
	}

	buf2 = buf;
	for (int i = 0; i < 10; i++)
	{
		cout << "Index: " << i << ",value: " << buf2[i] << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		buf[i] = i*10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "Index: " << i << ",value: " << buf2[i] << endl;
	}

}
