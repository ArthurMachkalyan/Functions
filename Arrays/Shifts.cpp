
#include "stdafx.h"


void shiftLeft(int arr[], int SIZE) {
	int number_of_shifts;
	cout << "¬ведите число сдвига: "; cin >> number_of_shifts;
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
	double number_of_shifts;
	cout << "¬ведите число сдвига: "; cin >> number_of_shifts;
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
	char number_of_shifts;
	cout << "¬ведите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[SIZE - 1] = buffer;
	}
}

void shiftRight(int arr[], int SIZE) {
	int number_of_shifts;
	cout << "¬ведите число сдвига: "; cin >> number_of_shifts;
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
	double number_of_shifts;
	cout << "¬ведите число сдвига: "; cin >> number_of_shifts;
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
	char number_of_shifts;
	cout << "¬ведите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[SIZE - 1];
		for (int i = SIZE - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}

}
