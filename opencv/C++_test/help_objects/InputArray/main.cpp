#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;
using namespace cuda;

void myTransform(InputArray src)
{
	cout << "flags=: " << ((src.getFlags() &_InputArray::KIND_MASK) >> _InputArray::KIND_SHIFT )<< endl;
}
void main()
{
	
	Matx61d m1;

	Mat m2;
	Mat m3;
	std::vector<int> v1;
	GpuMat gpu1;

	myTransform(m1);
	myTransform(m2);
	myTransform(m2+m3);
	myTransform(v1);
	myTransform(gpu1);
}