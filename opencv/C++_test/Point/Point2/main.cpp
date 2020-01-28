#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


void main()
{
	Point2i int_a;
	Point2l int64_b;
	Point2f float_c;
	Point2d double_d;

	Point2i int_a2(int_a);
	Point2l int64_b2(int64_b);
	Point2f float_c2(float_c);
	Point2d double_d2(double_d);

	int_a2.x = 1;
	int_a2.y = 2;
	cout << "int_a:" << int_a << endl;
	cout << "int_a2:" << int_a2 << endl;

	int64_b2.x = 23;
	int64_b2.y = 123456;
	cout << "int64_b:" << int64_b << endl;
	cout << "int64_b2:" << int64_b2 << endl;

	float_c2.x = 1.23;
	float_c2.y = 5.78;
	cout << "float_c:" << float_c << endl;
	cout << "float_c2:" << float_c2 << endl;

	double_d2.x = 12876;
	double_d2.y = 3787.324;
	cout << "double_d:" << double_d << endl;
	cout << "double_d2:" << double_d2 << endl;

	Point2i int_a3(7,8);
	Point2l int64_b3(234247, 32438);
	Point2f float_c3(23.34,465.8979);
	Point2d double_d3(246435, 463235.892379);
	cout << "int_a3:" << int_a3 << endl;
	cout << "int64_b3:" << int64_b3 << endl;
	cout << "float_c3:" << float_c3 << endl;
	cout << "double_d3:" << double_d3 << endl;

	cout << "int_a2.dot(int_a3):" << int_a2.dot(int_a3) << endl;
	cout << "int64_b2.dot(int64_b3):" << int64_b2.dot(int64_b3) << endl;
	cout << "float_c2.dot(float_c3):" << float_c2.dot(float_c3) << endl;
	cout << "double_d2.dot(double_d3):" << double_d2.dot(double_d2) << endl;

	cout << "int_a2.ddot(int_a3):" << int_a2.ddot(int_a3) << endl;
	cout << "int64_b2.ddot(int64_b3):" << int64_b2.ddot(int64_b3) << endl;
	cout << "float_c2.ddot(float_c3):" << float_c2.ddot(float_c3) << endl;
	cout << "double_d2.ddot(double_d3):" << double_d2.ddot(double_d2) << endl;

	cout << "int_a2.cross(int_a3):" << int_a2.cross(int_a3) << endl;
	cout << "int64_b2.cross(int64_b3):" << int64_b2.cross(int64_b3) << endl;
	cout << "float_c2.cross(float_c3):" << float_c2.cross(float_c3) << endl;
	cout << "double_d2.cross(double_d3):" << double_d2.cross(double_d2) << endl;
	
	cout << "int_a2.inside(int_a3):" << int_a2.inside(Rect(2,3,3,3)) << endl;
	cout << "int64_b2.inside(int64_b3):" << int64_b2.inside(Rect(2, 3, 3, 3)) << endl;
	cout << "float_c2.inside(float_c3):" << float_c2.inside(Rect(2, 3, 3, 3)) << endl;
	cout << "double_d2.inside(double_d3):" << double_d2.inside(Rect(2, 3, 3, 3)) << endl;

}