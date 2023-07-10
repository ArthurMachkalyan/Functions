#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

const int ROWS = 3;
const int COLS = 5;

#define tab "\t"
#define delimetr "\n-------------------------\n"


template <class A> void FillRand(A arr[], const int size);
template <class A> void FillRand(A arr[ROWS][COLS], const int ROWS, const int COLS);

template <class A> void Print(A arr[], const int size);
template <class A> void Print(A arr[ROWS][COLS], const int ROWS, const int COLS);

template <class A> void Sort(A arr[], const int size);
template <class A> void Sort(A arr[ROWS][COLS], const int ROWS, const int COLS);

template <class A> A Sum(A arr[], const int size);
template <class A> A Sum (A arr[ROWS][COLS], const int ROWS, const int COLS);

template <class A> double Avg(A arr[ROWS][COLS], const int ROWS, const int COLS);
template <class A> double Avg(A arr[], const int size);

template <class A> A minValueIn(A arr[], const int size);
template <class A> A minValueIn(A arr[ROWS][COLS], const int ROWS, const int COLS);

template <class A> A maxValueIn(A arr[], const int size);
template <class A> A maxValueIn(A arr[ROWS][COLS], const int ROWS, const int COLS);

template <class A> void shiftLeft(A arr[], const int size);
template <class A> void shiftRight(A arr[], const int size);



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

	cout << delimetr;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Cреднее - арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Mаксимальное значение: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Mинмальное значение из массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

template <class A> void FillRand(A arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

template <class A> void FillRand(A arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}

template <class A> void Print(A arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

template <class A> void Print(A arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}


template <class A> void Sort(A arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				double buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}


template <class A> void Sort(A arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}


template <class A> A Sum(A arr[], const int size) {
	A sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template <class A> A Sum(A arr[ROWS][COLS], const int ROWS, const int COLS) {
	A sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}


template <class A> double Avg(A arr[], const int size) {
	return (double)Sum(arr, size) / size;
}

template <class A> double Avg(A arr[ROWS][COLS], const int ROWS, const int COLS) {
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}


template <class A> A minValueIn(A arr[], const int size) {
	A min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

template <class A> A minValueIn(A arr[ROWS][COLS], const int ROWS, const int COLS) {
	int min = arr[0][0]; 
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}


template <class A> A maxValueIn(A arr[], const int size) {
	A max = 0;
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

template <class A> A maxValueIn(A arr[ROWS][COLS], const int ROWS, const int COLS) {
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}

template <class A> void shiftLeft(A arr[], const int size) {
	int number_of_shifts;
	cout << "Введите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		A buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
	}
}

template <class A> void shiftRight(A arr[], const int size) {
	int number_of_shifts;
	cout << "Введите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		A buffer = arr[size - 1];
		for (int i = size - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}
}

