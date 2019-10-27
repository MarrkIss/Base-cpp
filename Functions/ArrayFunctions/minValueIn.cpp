#include"Functions.h"
template<typename T>T  minValueIn(T Arr[], const int n)
{
	T min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)min = Arr[i];
	}
	return min;
}