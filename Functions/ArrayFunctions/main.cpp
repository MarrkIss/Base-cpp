#include"Functions.h"
#include"Print.cpp"
#include"Sort.cpp"
#include"Sum.cpp"
#include"Avg.cpp"
#include"minValueIn.cpp"
#include"maxValueIn.cpp"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n]; 

	FillRand(Arr, n);
	Print(Arr, n);
	Sort(Arr, n);
	Print(Arr, n);
	cout << "Сумма элементов массива: " << Sum(Arr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(Arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Arr, n) << endl;

	//////////////////////////////////////////////////////////////

	const int m = 10;
	double Brr[m];
	FillRand(Brr, m);
	Print(Brr, m);
	Sort(Brr, m);
	Print(Brr, m);
	cout << "Сумма элементов массива: " << Sum(Brr, m) << endl;
	cout << "Среднее арифметическое : " << Avg(Brr, m) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Brr, m) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Brr, m) << endl;

	///////////////////////////////////////////////////////////////

	const int SIZE = 8;
	char Crr[SIZE];
	FillRand(Crr, SIZE);
	Print(Crr, SIZE);
	Sort(Crr, SIZE);
	Print(Crr, SIZE);

	////////////////////////////////////////////////////////////////

	cout << "Двумерные массивы: " << endl;

	int Drr[ROWS][COLS] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	FillRand(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
	cout << endl;
	/*cout << "Сумма элементов массива: " << Sum(Drr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(Drr, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Drr, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Drr, ROWS, COLS) << endl;*/
	Sort(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
}
















