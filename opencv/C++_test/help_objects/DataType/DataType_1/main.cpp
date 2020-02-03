#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


class cIntArray
{
	int a[10];
public:
	cIntArray()
	{
		for (int i = 0; i < 10; i++)
		{
			a[i] = i + 1;
		}
	}

	int GetSum(int times)
	{
		int sum = 0;
		for (int i = 0; i < 10; i++)
		{
			sum += a[i];
		}

		return  sum*times;
	}
};

class cFloatArray
{
	float f[10];
public:
	cFloatArray()
	{
		for (int i = 1; i <= 10; i++)
		{
			f[i - 1] = 1.0f / i;
		}
	}

	float GetSum(float times)
	{
		float sum = 0.0f;
		for (int i = 0; i < 10; i++)
		{
			sum += f[i];
		}

		return sum * times;
	}
};

template <class T> class cApply
{
public:
	float GetSum(T &t, float inpara)
	{
		return t.GetSum(inpara);
	}
};

void main()
{
	cIntArray intary;
	cFloatArray fltary;

	cApply<cIntArray> c1;
	cApply<cFloatArray> c2;


	cout << "3 times of sum of int array is: " << c1.GetSum(intary, 3) << endl;
	cout << "3.2 times of sum of float array is: " << c2.GetSum(fltary, 3.2f) << endl;

#if 0
	cout << "value type: " << DataType<Matx44f>::channels << endl;
	cout << "fmt: " << DataType<Matx44f>::fmt << endl;
	
	cout << "type: " << DataType<int>::fmt << endl;

	cout << "value type: " << DataType<Matx66d>::channels << endl;
	cout << "fmt: " << DataType<Matx66d>::fmt << endl;

	//cout << "type: " << DataType<Matx66d>::type << endl;
	printf("type: %c\n", DataType<float>::fmt);
	printf("type: %c\n", DataType<Matx66d>::fmt);
	string s1(1, DataType<float>::fmt);
#endif
}