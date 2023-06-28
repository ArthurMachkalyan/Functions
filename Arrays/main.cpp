#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;



#define tab "\t"


template <class A> void FillRand(A arr[], const int size);
template <class A> void Print(A arr[], const int size);
template <class A> void Sort(A arr[], const int size);
template <class A> A Sum(A arr[], const int size);
template <class A> A Avg(A arr[], const int size);
template <class A> A minValueIn(A arr[], const int size);
template <class A> A maxValueIn(A arr[], const int size);
template <class A> void shiftLeft(A arr[], const int size);
template <class A> void shiftRight(A arr[], const int size);
//void shiftLeft(int arr[], int SIZE);
//void shiftRight(int arr[], int SIZE);



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

template <class A> void
FillRand(A arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

template <class A> void Print(A arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

template <class A> void Sort(A arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}


template <class A> A Sum(A arr[], const int size) {
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template <class A> A Avg(A arr[], const int size) {
	return (double)Sum(arr, size) / size;
}


double Avg(const int arr[], const int SIZE) {
	
	return (double)Sum(arr, SIZE) / SIZE;
}

template <class A> A minValueIn(A arr[], const int size) {
	double min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

template <class A> A maxValueIn(A arr[], const int size) {
	double max = 0;
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

template <class A> void shiftLeft(A arr[], const int size) {
	int number_of_shifts;
	cout << "Введите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
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
		double buffer = arr[size - 1];
		for (int i = size - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}
}

