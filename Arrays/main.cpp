#include <iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int size);
void Print(int arr[], int SIZE);
void Sort(int arr[], int SIZE);
void Sum(int arr[], int SIZE);
void Avg(int arr[], int SIZE);
void maxValueIn(int arr[], int SIZE);
void minValueIn(int arr[], int SIZE);
void shiftLeft(int arr[], int SIZE);
void shiftRight(int arr[], int SIZE);


void main() {
	setlocale(LC_ALL, "");

	const int SIZE = 10;
	int arr[SIZE];

	//Заполнение массива случайными числами
	FillRand(arr, SIZE);
	
	//Вывод массива на экран
	Print(arr, SIZE);

	//Сортировка массива
	Sort(arr, SIZE);
	Print(arr, SIZE);

	//Возвращает сумму элементов массива
	Sum(arr, SIZE);

	//Возвращает среднее - арифметическое элементов массива
	Avg(arr, SIZE);

	//Возвращает максимальное значение из массива
	maxValueIn(arr, SIZE);

	//Возвращает минимальное значение из массива
	minValueIn(arr, SIZE);

	//Cдвигает массив на заданное число элементов влево
	shiftLeft(arr, SIZE);
	Print(arr, SIZE);

	//Cдвигает массив на заданное число элементов вправо
	shiftRight(arr, SIZE);
	Print(arr, SIZE);


}

void FillRand(int arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void Print(int arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;	
}

void Sort(int arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
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

void Sum(int arr[], int SIZE) {
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;
}

void Avg(int arr[], int SIZE) {
	
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << double(sum) / SIZE << endl;
}

void maxValueIn(int arr[], int SIZE) {
	int max = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Максимальное значение в массиве: " << max;
	cout << endl;
}

void minValueIn(int arr[], int SIZE) {
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << "Максимальное значение в массиве: " << min;
	cout << endl;
}

void shiftLeft(int arr[], int SIZE) {
	int number_of_shifts;
	cout << "Введите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[SIZE - 1] = buffer;
	}
}

void shiftRight(int arr[], int SIZE) {
	int number_of_shifts;
	cout << "Введите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[SIZE - 1];
		for (int i = SIZE - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}

}