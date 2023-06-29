#include "Print.h"


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