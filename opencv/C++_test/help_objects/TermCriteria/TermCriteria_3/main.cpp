#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	TermCriteria term_crit(TermCriteria::EPS| TermCriteria::COUNT, 20, 9.8);
	
	double a = 0;
	for (int i = 0; i < term_crit.maxCount; i++)
	{
		if (a > term_crit.epsilon)
		{
			break;
		}
		a += 0.5;
		cout << "iter number: " << i<<",value: "<< a << endl;
	}
}