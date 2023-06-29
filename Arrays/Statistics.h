#pragma once
#include "Constants.h"

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