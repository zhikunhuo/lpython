#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


void main()
{
	Point3i int_a(4,5,6);
	

	Point3i int_a2(int_a);
	

	int_a2.x = 1;
	int_a2.y = 2;
	int_a2.z = 3;
	cout << "int_a=:" << int_a << endl;
	cout << "int_a2=:" << int_a2 << endl;
	
	cout << "int_a2- int_a=:" << (int_a2- int_a) << endl;
	cout << "int_a2+ int_a=:" << (int_a2 + int_a) << endl;
	cout << "int_a2*2=:" << int_a2 *2 << endl;
	cout << "int_a2/2=:" << int_a2 /2 << endl;
	cout << "(int_a2==int_a)=:" << (int_a2 ==int_a) << endl;
	
}