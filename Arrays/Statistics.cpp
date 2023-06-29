#include "Statistics.h"

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