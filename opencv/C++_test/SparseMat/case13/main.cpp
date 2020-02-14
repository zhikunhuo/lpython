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

	cv::SparseMat sm2;
	cv::SparseMat sm3;
	sm1.copyTo(sm2);
	sm1.convertTo(sm3, CV_32F);
	cout << "sm1 element number:" << sm1.nzcount() << endl;
	cout << "sm2 element number:" << sm2.nzcount() << endl;
	cout << "sm3 element number:" << sm3.nzcount() << endl;
}