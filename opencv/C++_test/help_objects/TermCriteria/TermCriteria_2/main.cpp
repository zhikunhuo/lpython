#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	TermCriteria term_crit(TermCriteria::EPS, 10, 9.8);
	
	double a = 0;
	while (a <= term_crit.epsilon)
	{
		cout << "number: " << a << endl;
		a += 0.5;
	}

	
}