#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;



void main()
{
	const int dims = 2;
	int size[dims] = { 10, 10 };
    
	int number = 0;

	cv::SparseMat sm1(dims, size, CV_32F);

	size_t* hashval = NULL;
	
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			sm1.ref<float>(i, j, hashval) = number*3.14;
			number++;
		}
	}

	Mat m1;
	Mat m2;
	sm1.copyTo(m1);
	sm1.convertTo(m2, CV_32F);

	cout << "m1 element number:" << m1.total() << endl;
	cout << "m2 element number:" << m2.total() << endl;
}