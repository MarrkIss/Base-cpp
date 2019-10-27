#include"Functions.h"
template<typename T>double Avg(T Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}