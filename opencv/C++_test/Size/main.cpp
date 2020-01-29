#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


void main()
{
	
	Size sz;
	Size2i szi;
	Size2l szl;
	Size2f szf;
	Size2d szd;

	cout << "sz.empty=:" << sz.empty() << endl;
	cout << "szi.empty=:" << szi.empty() << endl;
	cout << "szl.empty=:" << szl.empty() << endl;

	Size sz2(200, 300);
	Size2i szi2(300, 300);
	cout << "sz2=:" << sz2 <<endl;
	cout << "szi2=:" << szi2 << endl;
	
	Size2l szl2(21432,124214);
	cout << "szl2=:" << szl2 << endl;

	Size2f szf2(32543.123,523412.12323);
	cout << "szf2=:" << szf2 << endl;

	Size2d szd2(1253298,21323213);
	cout << "szd2=:" << szd2 << endl;


	Size sz3(sz2);
	cout << "sz3=:" << sz3 << endl;
	cout << "sz3.area=:" << sz3.area() << endl;
	//cout << "sz3.aspectRatio=:" << sz3.aspectRatio() << endl;
	cout << "sz3.empty=:" << sz3.empty() << endl;

	Size2l szl3(szl2);
	cout << "szl3=:" << szl3 << endl;
	cout << "szl3.area=:" << szl3.area() << endl;
	cout << "szl3.empty=:" << szl3.empty() << endl;

	Size2f szf3(szf2);
	cout << "szf3=:" << szf3 << endl;
	cout << "szf3.area=:" << szf3.area() << endl;
	cout << "szf3.empty=:" << szf3.empty() << endl;

	Size2d szd3(szd2);
    cout << "szd3=:" << szd3 << endl;
	cout << "szd3.area=:" << szd3.area() << endl;
	cout << "szd3.empty=:" << szd3.empty() << endl;
	
}