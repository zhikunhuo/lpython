#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


void main()
{
	
	Scalar s1;

	cout << "s1=:" << s1<<endl;
	cout << "s1.isReal=:" << s1.isReal() << endl;
	Scalar s2(10);
	cout << "s2=:" << s2 << endl;

	Scalar s3(10,11);
	cout << "s3=:" << s3 << endl;

	Scalar s4(10, 11,12);
	cout << "s4=:" << s4 << endl;

	Scalar s5(10, 11, 12,13);
	cout << "s5=:" << s5 << endl;

	Scalar s6(s5);
	cout << "s6=:" << s6 << endl;

	cout << "s5.mul(s6)=:" << s5.mul(s6) << endl;
	cout << "s5.conj()=:" << s5.conj() << endl;

	Scalar s7= Scalar::all(110);
	cout << "s7::all(110)=:" << s7 << endl;
	cout << "s7.isReal=:" << s7.isReal() << endl;
}