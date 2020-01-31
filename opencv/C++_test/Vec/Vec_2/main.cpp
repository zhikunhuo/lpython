#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	Vec3i v3i;

	Vec3i v3i1(1, 2, 3);
	Vec3i v3i2(4, 5, 6);

	cout << "v3i1 = " << v3i1 << endl;
	cout << "v3i2= " << v3i2 << endl;

	cout << "v3i1.mul(v3i2)= " << v3i1.mul(v3i2) << endl;
	cout << "v3i1.cross(v3i2)= " << v3i1.cross(v3i2) << endl;
}