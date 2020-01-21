#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

#define WINDOW_NAME "Test_Image"

const int g_nMaxAlphaValue = 100;
int g_nAlphaValueSlider;
double g_dAlphaValue;
double g_dBetaValue;

Mat girlImage;
Mat backImage;
Mat g_dstImage;

void on_Trackbar(int, void *)
{
	g_dAlphaValue = (double)g_nAlphaValueSlider / g_nMaxAlphaValue;

	g_dBetaValue = (1.0 - g_dAlphaValue);

	addWeighted(girlImage, g_dAlphaValue, backImage, g_dBetaValue,0.0, g_dstImage);

	imshow(WINDOW_NAME, g_dstImage);
}
void main()
{
	girlImage = imread("girl.jpg");

	backImage = imread("back.jpg");

	g_nAlphaValueSlider = 70;

	namedWindow(WINDOW_NAME, 1);

	char TrackbarName[50];
	sprintf_s(TrackbarName, "Opacity value:%d", g_nMaxAlphaValue);

	createTrackbar(TrackbarName, WINDOW_NAME, &g_nAlphaValueSlider, g_nMaxAlphaValue, on_Trackbar);


	on_Trackbar(g_nAlphaValueSlider, 0);

	waitKey(0);

	return ;
}