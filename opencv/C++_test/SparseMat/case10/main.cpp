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

	cv::SparseMat sm;
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

	cout << "sm1 element number:" << sm1.nzcount() << endl;
	cout << "Delete all element..." << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			sm1.erase(i, j);
			number++;
		}
	}
	

	cout << "sm1 element number:" << sm1.nzcount() << endl;
}