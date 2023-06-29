#include "stdafx.h"
#include "Constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"
#include "Shifts.h"


void main() {
	setlocale(LC_ALL, "");

	const int SIZE = 10;
	int arr[SIZE];
	double i_arr_2[ROWS][COLS];


	//Заполнение массива случайными числами
	FillRand(arr, SIZE);
	
	//Вывод массива на экран
	Print(arr, SIZE);

	//Сортировка массива
	Sort(arr, SIZE);
	Print(arr, SIZE);

	//Возвращает сумму элементов массива
	cout << "Сумма элементов массива: " << Sum(arr, SIZE) << endl;

	//Возвращает среднее - арифметическое элементов массива
	cout << "Cреднее - арифметическое элементов массива: " << Avg(arr, SIZE) << endl;

	//Возвращает максимальное значение из массива
	cout << "Mаксимальное значение: " << maxValueIn(arr, SIZE) << endl;;

	//Возвращает минимальное значение из массива
	cout << "Mинмальное значение из массива: " << minValueIn(arr, SIZE) << endl;;

	//Cдвигает массив на заданное число элементов влево
	shiftLeft(arr, SIZE);
	Print(arr, SIZE);

	////Cдвигает массив на заданное число элементов вправо
	shiftRight(arr, SIZE);
	Print(arr, SIZE);
	cout << endl;

	//Заполнение случаныйми числами и вывод двумерного массива
	cout << "Двумерный массив заполненный случайными числами: " << endl;
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout <<"Сумма элементов двумерного массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout <<"Среднее-арифметическое элементов двумерного массива: " << Avg(i_arr_2, ROWS, COLS) << endl;

}