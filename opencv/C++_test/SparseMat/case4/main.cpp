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
	cv::SparseMat sm1(dims, size, CV_8U);

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			*sm1.ptr(i, j, 1) = number;
			number++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("id0: %d, id1:%d, value:%d\n",i,j, *sm1.ptr(i, j, 1));
		}
	}

	cout << "sm1 element number:" << sm1.nzcount() << endl;
#if 0
	cv::SparseMat sm2(dims, size, CV_32F);
	float * pValue = NULL;
	printf("sm1 dims=%d\n", sm2.dims());
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			temp = sm2.ptr(i, j, 1);
			pValue = (float *)temp;
			if (NULL == temp)
			{
				printf("sm2 is ptr\n");
			}
			else {
				*(float *)temp = 3.14*number;
			}

			//else {
			//*sm1.ptr(i, j, 1) = number;
			//}
			number++;
		}
	}
	

	cout << "sm1 nzcount = " << sm2.nzcount() << endl;
for (int i = 0; i < 10; i++)
{
	for (int j = 0; j < 10; j++)
	{
		//printf("%f\n", *(float *)sm2.ptr(i, j, 0));
		printf("%f\n", sm1.value<float>(i, j));
	}
}
#endif
#if 0
	cout << "sm1 nzcount = " << sm1.nzcount() << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d\n", sm1.value<uchar>(i, j));
		}
	}
#endif
#if 0
	cv::SparseMatConstIterator_<float> it     = sm.begin<float>();
	cv::SparseMatConstIterator_<float> it_end = sm.end<float>();

	for (; it != it_end; ++it)
	{
		const cv::SparseMat::Node* node = it.node();
		printf("(%3d,%3d): \n", node->idx[0], node->idx[1]);
	}
#endif


	//const int dims =2;
	//int size[2] = { 10, 10 };
	//SparseMat sparse_mat(dims, size, CV_32F);
#if 0
	for (int i = 0; i < 1000; i++)
	{
		int idx[dims];
		for (int k = 0; k < dims; k++)
			idx[k] = rand() % size[k];
		sparse_mat.ref<float>(idx) += 1.f;
	}
	cout << "nnz = " << sparse_mat.nzcount() << endl;
#endif
}