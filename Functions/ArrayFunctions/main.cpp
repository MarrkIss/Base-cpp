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
	cout << "����� ��������� �������: " << Sum(Arr, n) << endl;
	cout << "������� �������������� : " << Avg(Arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Arr, n) << endl;

	//////////////////////////////////////////////////////////////

	const int m = 10;
	double Brr[m];
	FillRand(Brr, m);
	Print(Brr, m);
	Sort(Brr, m);
	Print(Brr, m);
	cout << "����� ��������� �������: " << Sum(Brr, m) << endl;
	cout << "������� �������������� : " << Avg(Brr, m) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Brr, m) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Brr, m) << endl;

	///////////////////////////////////////////////////////////////

	const int SIZE = 8;
	char Crr[SIZE];
	FillRand(Crr, SIZE);
	Print(Crr, SIZE);
	Sort(Crr, SIZE);
	Print(Crr, SIZE);

	////////////////////////////////////////////////////////////////

	cout << "��������� �������: " << endl;

	int Drr[ROWS][COLS] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	FillRand(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
	cout << endl;
	/*cout << "����� ��������� �������: " << Sum(Drr, ROWS, COLS) << endl;
	cout << "������� �������������� : " << Avg(Drr, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Drr, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Drr, ROWS, COLS) << endl;*/
	Sort(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
}
















