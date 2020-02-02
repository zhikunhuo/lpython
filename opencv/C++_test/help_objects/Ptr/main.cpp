#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	Ptr<Vec3i> p(new Vec3i);

	*p = Vec3i::all(10);

	
	cout << "p value= " << *p << endl;
}