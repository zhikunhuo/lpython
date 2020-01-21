#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

void main()
{
	Mat srcImage = imread("rgb_C.png", IMREAD_GRAYSCALE);

	imshow("src_Image", srcImage);
	waitKey(0);

	Mat colorImage = imread("rgb_C.png", IMREAD_COLOR);
	imshow("color_Image", colorImage);
	waitKey(0);

	Mat depthImage = imread("rgb_C.png", IMREAD_ANYDEPTH);
	imshow("depth_Image", depthImage);
	waitKey(0);

	Mat anyColorImage = imread("rgb_C.png", IMREAD_ANYCOLOR);
	imshow("AnyColor_Image", anyColorImage);
	waitKey(0);

	Mat srcImage2 = imread("rgb_C.png", IMREAD_REDUCED_GRAYSCALE_2);
	imshow("src_Image2", srcImage2);
	waitKey(0);

	Mat gdalImage2 = imread("rgb_C.png", IMREAD_LOAD_GDAL);
	imshow("GDAL_Image2", gdalImage2);
	waitKey(0);
	Mat reduceColorImage2 = imread("rgb_C.png", IMREAD_REDUCED_COLOR_2);
	imshow("Reduced_color_Image2", reduceColorImage2);
	waitKey(0);

	Mat srcImage4 = imread("rgb_C.png", IMREAD_REDUCED_GRAYSCALE_4);
	imshow("src_Image4", srcImage4);
	waitKey(0);

	Mat reduceColorImage4 = imread("rgb_C.png", IMREAD_REDUCED_COLOR_4);
	imshow("Reduced_color_Image4", reduceColorImage4);
	waitKey(0);

	Mat srcImage8= imread("rgb_C.png", IMREAD_REDUCED_GRAYSCALE_8);
	imshow("src_Image8", srcImage8);
	waitKey(0);

	Mat reduceColorImage8 = imread("rgb_C.png", IMREAD_REDUCED_COLOR_8);
	imshow("Reduced_color_Image8", reduceColorImage8);
	waitKey(0);
#if 0
	Mat dstImage, edge, grayImage;

	//blur(srcImage, dstImage, Size(7,7));
	dstImage.create(srcImage.size(), srcImage.type());
	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);

	blur(grayImage, edge, Size(3, 3));
	Canny(edge, edge, 3, 9, 3);
	imshow("Edge_Image", edge);
	waitKey(0);
#endif
}