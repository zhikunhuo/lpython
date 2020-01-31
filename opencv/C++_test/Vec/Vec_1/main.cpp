#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	Vec3i v3i;

	Vec3i v3i1(1, 2, 3);

	int value[] = { 4,5,6 };
	Vec3i v3i2(value);

	cout << "v3i= " << v3i << endl;
	cout << "v3i1= " << v3i1 << endl;
	cout << "v3i2= " << v3i2 << endl;

	Vec3i v3i3 = Vec3i::all(10);
	cout << "v3i3= " << v3i3 << endl;

	Vec3f v3i4;
	for (int i = 0; i < v3i4.rows; i++)
	{
		v3i4[i] = i;

	}
	cout << "v3i4= " << v3i4 << endl;

	Vec3i v3i5;
	for (int i = 0; i < v3i5.rows; i++)
	{
		v3i5(i) = i+10;

	}
	cout << "v3i5= " << v3i5 << endl;
}