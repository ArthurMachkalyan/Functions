#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;



#define tab "\t"


template <class A, class B> void FillRand(A arr[], B size);
template <class A, class B> void Print(A arr[], B size);
template <class A, class B> void Sort(A arr[], B size);
template <class A, class B> A Sum(A arr[], B size);
template <class A, class B> A Avg(A arr[], B size);
template <class A, class B> A minValueIn(A arr[], B size);
template <class A, class B> A maxValueIn(A arr[], B size);
template <class A, class B> void shiftLeft(A arr[], B size);
template <class A, class B> void shiftRight(A arr[], B size);



void main() {
	setlocale(LC_ALL, "");

	const int SIZE = 10;
	char arr[SIZE];


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

template <class A, class B> void
FillRand(A arr[], B size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

template <class A, class B> void Print(A arr[], B size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

template <class A, class B> void Sort(A arr[], B size) {
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


template <class A, class B > A Sum(A arr[], B size) {
	A sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template <class A, class B> A Avg(A arr[], B size) {
	return (double)Sum(arr, size) / size;
}

template <class A, class B> A minValueIn(A arr[], B size) {
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

template <class A, class B > A maxValueIn(A arr[], B size) {
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

template <class A, class B> void shiftLeft(A arr[], B size) {
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

template <class A, class B> void shiftRight(A arr[], B size) {
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

