#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;

void main()
{
	Mat image(200, 200, CV_8UC3, Scalar(0));
	RotatedRect rRect = RotatedRect(Point2f(100, 100), Size2f(100, 50), 30);
	RotatedRect rRect1;
	RotatedRect rRect2 = rRect1+ rRect;

	Point2f vertices[4];
	rRect.points(vertices);
	for (int i = 0; i < 4; i++)
		line(image, vertices[i], vertices[(i + 1) % 4], Scalar(0, 255, 0));
	Rect brect = rRect.boundingRect();
	rectangle(image, brect, Scalar(255, 0, 0));
	imshow("rectangles", image);
	waitKey(0);

}