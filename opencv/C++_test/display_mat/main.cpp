#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

void main()
{
	Mat srcImage = imread("rgb_C.png", IMREAD_GRAYSCALE);

	printf("Src Image data 0x%x\n", srcImage.data);

	Mat SrcImage2 = srcImage;
	printf("Src Image2 data 0x%x\n", SrcImage2.data);
	Mat SrcImage3(srcImage);
	printf("Src Image3 data 0x%x\n", SrcImage3.data);
	Mat SrcImage4;
	srcImage.copyTo(SrcImage4);
	printf("Src Image4 data 0x%x\n", SrcImage4.data);
	Mat SrcImage5 = srcImage.clone();
	printf("Src Image5 data 0x%x\n", SrcImage5.data);

	Mat M(2, 2, CV_8UC3, Scalar(110, 0, 255));
	cout << "M= " << endl << " " << M << endl << endl;

	int sz[3] = { 2,2,2 };
	Mat L(3, sz, CV_8UC1, Scalar::all(12));
	cout << "L= (C)" << endl << format(M, Formatter::FMT_C) << endl << endl;

	cout << "L= (numpy)" << endl << format(M, Formatter::FMT_NUMPY) << endl << endl;

	cout << "L= (CSV)" << endl << format(M, Formatter::FMT_CSV) << endl << endl;

	cout << "L= (,)" << endl << format(M, Formatter::FMT_CSV) << endl << endl;

	cout << "L= (python)" << endl << format(M, Formatter::FMT_PYTHON) << endl << endl;

	printf("Dim: %d, data[0]: %d\n", L.dims, *L.datastart);
	const uchar* dataindex = L.datastart;
	int index = 0;
	while (dataindex != L.dataend)
	{
		printf("Index:%d, Data:%d\n", index, *dataindex);
		dataindex++;
	}


	dataindex = M.datastart;
	index = 0;
	while (dataindex != M.dataend)
	{
		printf("M Index:%d, Data:%d\n", index, *dataindex);
		dataindex++;
	}
}