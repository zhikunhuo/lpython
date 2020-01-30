#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


void main()
{

	Rect r;
	Rect2f rf;
	Rect2d rd;

	cout << "r.empty=:" << r.empty() << endl;
	cout << "f.empty=:" << rf.empty() << endl;
	cout << "rd.empty=:" << rd.empty() << endl;

	Rect r2(0, 0, 300, 400);
	Rect2f rf2(0, 0, 300.1, 400.4);
	Rect2d rd2(2, 2, 2324, 2142424);
	cout << "r2=:" << r2 << endl;
	cout << "r2.tl=:" << r2.tl() << endl;
	cout << "r2.br=:" << r2.br() << endl;
	cout << "r2.size=:" << r2.size() << endl;
	cout << "r2.area=:" << r2.area() << endl;
	cout << "r2.empty=:" << r2.empty() << endl;
	cout << "**********************" << endl;
	cout << "rf2=:" << rf2 << endl;
	cout << "rf2.tl=:" << rf2.tl() << endl;
	cout << "rf2.br=:" << rf2.br() << endl;
	cout << "rf2.size=:" << rf2.size() << endl;
	cout << "rf2.area=:" << rf2.area() << endl;
	cout << "rf2.empty=:" << rf2.empty() << endl;
	cout << "rd2.contains(Point(200,200))=:" << rd2.contains(Point(200, 200)) << endl;
	cout << "**********************" << endl;
	cout << "rd2=:" << rd2 << endl;
	cout << "rd2.tl=:" << rd2.tl() << endl;
	cout << "rd2.br=:" << rd2.br() << endl;
	cout << "rd2.size=:" << rd2.size() << endl;
	cout << "rd2.area=:" << rd2.area() << endl;
	cout << "rd2.empty=:" << rd2.empty() << endl;

	Rect2f rf3(rf2);
	rf3.x = 500;
	rf3.y = 600;
	cout << "rf3=:" << rf3 << endl;
}
