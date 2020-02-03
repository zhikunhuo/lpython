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
	
#if 0
	cApply<int> c1;
	cApply<float> c2;
	cApply<double> c3;


	cout << "3 times of sum of int array is: " << c1.GetSum(3) << endl;
	cout << "3.2 times of sum of float array is: " << c2.GetSum(3.2f) << endl;
	cout << "3.2 times of sum of double array is: " << c3.GetSum(3.2f) << endl;
#endif

#if 1
	cout << "value type: " << DataType<Matx44f>::channels << endl;
	cout << "fmt: " << DataType<Matx44f>::fmt << endl;
	
	cout << "type: " << DataType<int>::fmt << endl;

	cout << "value type: " << DataType<Matx66d>::channels << endl;
	string s21(1, DataType<Matx66d>::fmt);
	//cout << "fmt: " << DataType<Matx66d>::fmt << endl;

	string s2(1, DataType<DataType<Matx66d>::work_type>::fmt);
	cout << "s21 fmt: " << s21 << endl;
	cout << "s2 fmt: " << s2 << endl;

	//cout << "type: " << DataType<Matx66d>::type << endl;
	printf("type: %c\n", DataType<float>::fmt);
	printf("type: %c\n", DataType<Matx66d>::fmt);
	string s1(1, DataType<float>::fmt);
#endif
}