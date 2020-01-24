#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

void main()
{
	//Mat srcImage = imread("rgb_C.png", IMREAD_GRAYSCALE);

    //printf("Src Image data 0x%x\n", srcImage.data);
	
	int sz[3] = { 2,2,2 };
	Mat L(3, sz, CV_8UC1, Scalar::all(12));

	Mat mtx();

	Mat test1(640, 480, CV_8UC1);
	Mat test2(Size(640, 480), CV_8UC1);
	
	Mat M(2, 2, CV_8UC3, Scalar(110, 0, 255));
	cout << "M= " << endl << " " << M << endl << endl;
	Mat test3(Size(2, 2), CV_8UC3, Scalar(120, 0, 255));
	cout << "test3= " << endl << " " << test3 << endl << endl;

	int sz2[2] = { 5,5};
	Mat test4(2, sz2, CV_8UC3, Scalar(12));
	cout << "test4= " << endl << " " << test4 << endl << endl;
	
	Mat test5= test4.rowRange(1, 3);
	cout << "test5= " << endl << " " << test5 << endl << endl;
	Mat test6 = test4.rowRange(Range(0, 4));
	cout << "test6= " << endl << " " << test6 << endl << endl;
	Mat test7 = test4.colRange(0, 2);
	cout << "test7= " << endl << " " << test7 << endl << endl;
	Mat test8 = test4.colRange(Range(0, 3));
	cout << "test8= " << endl << " " << test8 << endl << endl;
	Mat test9 = test4.diag(0);
	cout << "test9= " << endl << " " << test9 << endl << endl;
	Mat test10 = test4.diag(1);
	cout << "test10= " << endl << " " << test10 << endl << endl;
	Mat test11 = test4.diag(-1);
	cout << "test11= " << endl << " " << test11 << endl << endl;
	Mat test12;
	//Mat test13(2, sz2, CV_8UC1, Scalar(12));
	test12 = test4.clone();
	cout << "test12= " << endl << " " << test12 << endl << endl;
	Mat test13;
	test4.copyTo(test13);
	cout << "test13= " << endl << " " << test13 << endl << endl;
	Mat test14;
	test4.copyTo(test14, test4);
	cout << "test14= " << endl << " " << test14 << endl << endl;


#if 0
	Mat test5(test4);
	cout << "test5= " << endl << " " << test5 << endl << endl;
	Mat test6(3,3, CV_8UC3, test5.data);
	cout << "test6= " << endl << " " << test6 << endl << endl;
	Mat test11(4, 4, CV_8UC3, test5.data, 12);
	cout << "test11= " << endl << " " << test11 << endl << endl;

	Mat test7(2, sz2, CV_8UC3, test5.data);
	cout << "test7= " << endl << " " << test7 << endl << endl;
	const size_t  steps = 3;
	Mat test12(2, sz2, CV_8UC3, test5.data, &steps);
	cout << "test12= " << endl << " " << test12<< endl << endl;

	Mat test8(test7, Range(0,2), Range(0, 2));
	cout << "test8= " << endl << " " << test8 << endl << endl;
	Mat test9(test7, Rect(0,0, 3, 3));
	cout << "test8= " << endl << " " << test9 << endl << endl;
	Mat test10(test7, Range(0, 2));
	cout << "test10= " << endl << " " << test10 << endl << endl;
#endif
}