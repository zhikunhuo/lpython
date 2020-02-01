#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	Range r1(10, 20);

	cout << "r1= " << r1 << endl;
	cout << "r1.size()= " << r1.size() << endl;
	cout << "r1.empty()= " << r1.empty() << endl;
	cout << "r1.all()= " << r1.all() << endl;

}