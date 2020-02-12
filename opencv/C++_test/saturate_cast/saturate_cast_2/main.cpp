#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

int  g_nContrastValue;
int g_nBrightValue;
Mat g_srcImage, g_dstImage;

static void on_ContrastAndBright(int, void*) {
	namedWindow("【原始图像窗口】", 1);
	for (int y = 0; y < g_srcImage.rows; y++)
	{
		for (int x = 0; x < g_srcImage.cols; x++)
		{
			for (int c = 0; c < 3; c++)
			{
				g_dstImage.at<Vec3b>(y, x)[c] = saturate_cast<uchar>((g_nContrastValue*0.01)*(g_srcImage.at<Vec3b>(y, x)[c]) + g_nBrightValue);
			}
		}
	}
	imshow("【原始图像窗口】", g_srcImage);
	imshow("【效果图窗口】", g_dstImage);
}

void main()
{
	g_srcImage = imread("len_top.jpg");
	int alpha = 10;
	int gama = 10;

	//imshow("Src", g_srcImage);
	//waitKey(0);
	g_dstImage = Mat::zeros(g_srcImage.size(), g_srcImage.type());

	g_nContrastValue = 80;
	g_nBrightValue = 80;
	namedWindow("【效果图窗口】", 1);
	createTrackbar("对比度：", "【效果图窗口】", &g_nContrastValue, 300, on_ContrastAndBright);
	createTrackbar("亮  度：", "【效果图窗口】", &g_nBrightValue, 200, on_ContrastAndBright);

	on_ContrastAndBright(g_nContrastValue, 0);
	on_ContrastAndBright(g_nBrightValue, 0);

	while (char(waitKey(1)) != 'q') {}
}