#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void main()
{
	TermCriteria term_crit(TermCriteria::COUNT, 10, 1);
	

	for (int i = 0; i < term_crit.maxCount; i++)
	{
		cout << "number: " << i << endl;
	}
}