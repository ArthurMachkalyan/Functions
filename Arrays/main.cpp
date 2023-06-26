#include <iostream>
using namespace std;

#define tab "\t"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int size);
void FillRand(double arr[], const int size);
void FillRand(char arr[], const int size);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);


void Print(const int arr[], const int SIZE);
void Print(const double arr[], const int SIZE);
void Print(const char arr[], const int SIZE);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);


void Sort(int arr[], int SIZE);
void Sort(double arr[], int SIZE);
void Sort(char arr[], int SIZE);

int Sum(const int arr[], const int SIZE);
double Sum(const double arr[], const int SIZE);
char Sum(const char arr[], const int SIZE);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);


int Avg(const int arr[], const int SIZE);
double Avg(const double arr[], const int SIZE);
char Avg(const char arr[], const int SIZE);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int arr[], const int SIZE);
double minValueIn(const double arr[], const int SIZE);
char minValueIn(const char arr[], const int SIZE);

int maxValueIn(const int arr[], const int SIZE);
double maxValueIn(const double arr[], const int SIZE);
char maxValueIn(const char arr[], const int SIZE);

void shiftLeft(int arr[], int SIZE);
void shiftLeft(double arr[], int SIZE);
void shiftLeft(char arr[], int SIZE);

void shiftRight(int arr[], int SIZE);
void shiftRight(double arr[], int SIZE);
void shiftRight(char arr[], int SIZE);


void main() {
	setlocale(LC_ALL, "");

	const int SIZE = 10;
	int arr[SIZE];
	char i_arr_2[ROWS][COLS];


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

void FillRand(int arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void FillRand(double arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

void FillRand(char arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100000;
			arr[i][j] /= 100;
		}
	}
}

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}


void Print(const int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;	
}

void Print(const double arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;	
}

void Print(const char arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;	
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

void Print(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
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

void Sort(double arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
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

void Sort(char arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				char buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}

int Sum(const int arr[], const int SIZE) {
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(const double arr[], const int SIZE) {
	double sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

char Sum(const char arr[], const int SIZE) {
	char sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}


int Avg(const int arr[], const int SIZE) {
	
	return (double)Sum(arr, SIZE) / SIZE;
}

double Avg(const double arr[], const int SIZE) {
	
	return (double)Sum(arr, SIZE) / SIZE;
}

char Avg(const char arr[], const int SIZE) {
	
	return (double)Sum(arr, SIZE) / SIZE;
}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);

}

double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}


int maxValueIn(const int arr[], const int SIZE) {
	int max = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

double maxValueIn(const double arr[], const int SIZE) {
	double max = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

char maxValueIn(const char arr[], const int SIZE) {
	char max = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

int minValueIn(const int arr[], const int SIZE) {
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

double minValueIn(const double arr[], const int SIZE) {
	double min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

char minValueIn(const char arr[], const int SIZE) {
	char min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
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

void shiftLeft(double arr[], int SIZE) {
	int number_of_shifts;
	cout << "Введите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[SIZE - 1] = buffer;
	}
}

void shiftLeft(char arr[], int SIZE) {
	int number_of_shifts;
	cout << "Введите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
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

void shiftRight(double arr[], int SIZE) {
	int number_of_shifts;
	cout << "Введите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[SIZE - 1];
		for (int i = SIZE - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}

}

void shiftRight(char arr[], int SIZE) {
	int number_of_shifts;
	cout << "Введите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[SIZE - 1];
		for (int i = SIZE - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}

}