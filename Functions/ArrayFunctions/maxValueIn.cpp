#include"Functions.h"
template<typename T>T maxValueIn(T Arr[], const int n)
{
	T max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)max = Arr[i];
	}
	return max;
}