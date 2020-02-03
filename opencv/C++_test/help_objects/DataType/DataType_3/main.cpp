#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

template<typename _Tp> class cApply
{
public:
	typedef _Tp value_type;

	_Tp value[10];
	cApply()
	{
		
	}
	typename cApply<_Tp>::value_type GetSum(_Tp times)
	{
	
		return 0;
	}
};


template<> class cApply<int>
{
public:

	int value[10];
	cApply()
	{
		for (int i = 0; i < 10; i++)
		{
			value[i] = i + 1;
		}

	}

	int GetSum(int times)
	{
		int sum = 0;
		for (int i = 0; i < 10; i++)
		{
			sum += value[i];
		}

		return  sum*times;
	}

};

template<> class cApply<float>
{
public:

	float value[10];
	cApply()
	{
		for (int i = 1; i <= 10; i++)
		{
			value[i - 1] = 1.0f / i;
		}

	}

	float GetSum(float times)
	{
		float sum = 0;
		for (int i = 0; i < 10; i++)
		{
			sum += value[i];
		}

		return  sum*times;
	}
};

void main()
{
	cApply<int> c1;
	cApply<float> c2;
	cApply<double> c3;


	cout << "3 times of sum of int array is: " << c1.GetSum(3) << endl;
	cout << "3.2 times of sum of float array is: " << c2.GetSum(3.2f) << endl;
	cout << "3.2 times of sum of double array is: " << c3.GetSum(3.2f) << endl;

}