#include "stdafx.h"
#include "Print.h"
#include "FillRand.h"
#include "Sort.h"
#include "Statistics.h"
#include "Shift.h"


void main() {
	setlocale(LC_ALL, "");

	const int SIZE = 10;
	double arr[SIZE];


	FillRand(arr, SIZE);
	Print(arr, SIZE);
	Sort(arr, SIZE);
	Print(arr, SIZE);
	cout << "Сумма элементов массива: " << Sum(arr, SIZE) << endl;
	cout << "Cреднее - арифметическое элементов массива: " << Avg(arr, SIZE) << endl;
	cout << "Mаксимальное значение: " << maxValueIn(arr, SIZE) << endl;
	cout << "Mинмальное значение из массива: " << minValueIn(arr, SIZE) << endl;
	//Cдвигает массив на заданное число элементов влево
	shiftLeft(arr, SIZE);
	Print(arr, SIZE);
	//Cдвигает массив на заданное число элементов вправо
	shiftRight(arr, SIZE);
	Print(arr, SIZE);

}

