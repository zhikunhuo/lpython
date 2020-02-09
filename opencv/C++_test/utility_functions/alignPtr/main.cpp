#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;
using namespace cuda;

void myTransform(InputArray src)
{
	cout << "flags=: " << ((src.getFlags() &_InputArray::KIND_MASK) >> _InputArray::KIND_SHIFT )<< endl;
	cout << "empty=: " << src.empty()<< endl;
}
void main()
{

	char * buffer = (char *)malloc(100);
	char * buffer2;
	if (NULL == buffer)
	{
		return;
	}

	printf("buffer address: 0x%X\n", buffer);
	printf("buffer +£¨n-1£© address: 0x%X\n", (size_t)buffer + 64-1);

	buffer2 = cv::alignPtr(buffer, 64);

	printf("buffer2 address: 0x%X\n", buffer2);
	free(buffer);


}