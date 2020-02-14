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
	cv::SparseMat sm2(sm1);
    cv:Mat  m1(460, 480, CV_32FC3);
	cv::SparseMat sm3(m1);

	cout << "sm type: " << sm.type() << endl;
	cout << "sm depth: " << sm.depth() << endl;
	cout << "sm channels: " << sm.channels() << endl;
	const int * pSize = sm.size();
	if (NULL == pSize)
	{
		cout << "sm size is empty" << endl;
	}

	cout << "sm1 type: " << sm1.type() << endl;
	cout << "sm1 depth: " << sm1.depth() << endl;
	cout << "sm1 channels: " << sm1.channels() << endl;
	const int * pSize1 = sm1.size();
	if (NULL == pSize1)
	{
		cout << "sm1 size is empty" << endl;
	}
	cout << "sm1 dims: " << sm1.dims() << endl;
	cout << "sm1 nzcount: " << sm1.nzcount() << endl;

	cout << "sm3 type: " << sm3.type() << endl;
	cout << "sm3 depth: " << sm3.depth() << endl;
	cout << "sm3 channels: " << sm3.channels() << endl;
	const int * pSize3 = sm1.size();
	if (NULL == pSize3)
	{
		cout << "sm3 size is empty" << endl;
	}

	cout << "sm3 dims: " << sm3.dims() << endl;
	cout << "sm3 nzcount: " << sm3.nzcount() << endl;
	cout << "sm3 elemSize: " << sm3.elemSize() << endl;
	cout << "sm3 elemSize1: " << sm3.elemSize1() << endl;
#if 0
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			*sm.ptr(i,j, 1) = number;
			number++;
		}
	}

	cout << "nnz = " << sm.nzcount() << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d\n", sm.value<uchar>(i, j));
		}
	}
#if 0
	cv::SparseMatConstIterator_<float> it     = sm.begin<float>();
	cv::SparseMatConstIterator_<float> it_end = sm.end<float>();

	for (; it != it_end; ++it)
	{
		const cv::SparseMat::Node* node = it.node();
		printf("(%3d,%3d): \n", node->idx[0], node->idx[1]);
	}
#endif
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