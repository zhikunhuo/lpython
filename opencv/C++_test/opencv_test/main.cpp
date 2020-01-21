#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

void main()
{
	Mat test22;
	test22.create(16, 16, CV_8UC1);
	printf("Test22  col:%d, row:%d\n", test22.cols, test22.rows);
	//Mat test2;
	test22.resize(8);
	printf("Test22  col:%d, row:%d\n", test22.cols, test22.rows);
	test22.resize(4,Scalar::all(11));
	printf("Test22  col:%d, row:%d\n", test22.cols, test22.rows);
	cout << "test22= " << endl << " " << test22 << endl << endl;


#if 0
	Mat test2;
	test2.create(Size(320,240), CV_8UC1);
	printf("Test2 col:%d, row:%d\n", test2.cols, test2.rows);
	int sz[2] = {15, 15 };
	Mat test3;
	test3.create(2, sz, CV_8UC1);
	printf("Test3 col:%d, row:%d\n", test3.cols, test3.rows);
	vector<int> mat_size;
	mat_size.push_back(320);
	mat_size.push_back(240); 
	Mat test4;
	test4.create(mat_size, CV_8UC1);
	printf("Test4 col:%d, row:%d\n", test4.cols, test4.rows);
	Mat test5(2, sz, CV_8UC1, Scalar::all(12));
	cout << "test5= " << endl << " " << test5 << endl << endl;
	test5= Mat::zeros(2, sz, CV_8UC1);
	cout << "zero test5= " << endl << " " << test5 << endl << endl;
	Mat test6;
	test6 = Mat::zeros(3,4, CV_8UC1);
	cout << "zero test6= " << endl << " " << test6 << endl << endl;
	Mat test7 = Mat::zeros(5,6, CV_8UC1);
	cout << "zero test7= " << endl << " " << test7 << endl << endl;
	
	Mat test8 = Mat::ones(5, 6, CV_8UC1);
	cout << "one test8= " << endl << " " << test8 << endl << endl;
	Mat test9 = Mat::ones(Size(4, 7), CV_8UC1);
	cout << "one test9= " << endl << " " << test9 << endl << endl;
	Mat test10 = Mat::ones(2, sz, CV_8UC1);
	cout << "one test10= " << endl << " " << test10 << endl << endl;

	Mat test11 = Mat::eye(5, 6, CV_8UC1);
	cout << "eye test11= " << endl << " " << test11 << endl << endl;
	Mat test12 = Mat::eye(Size(7, 7), CV_8UC1);
	cout << "eye test12= " << endl << " " << test12 << endl << endl;
#endif
}