#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


void main()
{
	Rect r(0,0,300,400);

	cout << "r=: " << r << endl;
	cout << "r+Point(2,3)=: " << r + Point(2, 3)<< endl;
	cout << "r+Size(200,300)=: " << r + Size(200, 300) << endl;	
	
}