#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


void main()
{
	Rect r1(0,0,300,400);
	Rect r2(5, 5, 500, 600);

	cout << "r1&r2=: " << (r1&r2) << endl;
	cout << "r1|r2" << (r1|r2) << endl;


	Rect r3(0, 0, 100, 200);
	Rect r4(300, 400, 100, 200);

	cout << "r3&r4=: " << (r3&r4) << endl;
	cout << "r3|r4" << (r3 | r4) << endl;	
}