#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

void main()
{;
    Mat Src(10, 10, CV_8UC1);
	for (int RowIndex = 0; RowIndex < Src.rows; RowIndex++)
	{
		for (int ColIndex = 0; ColIndex < Src.cols; ColIndex++)
		{
			Src.at<unsigned char>(RowIndex, ColIndex)= ColIndex;
		}
	}

	cout << "Src = " << endl << Src << endl;
}