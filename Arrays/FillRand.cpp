#include "stdafx.h"
#include "FillRand.h"


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