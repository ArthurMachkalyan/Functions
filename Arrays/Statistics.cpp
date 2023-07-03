#include "Statistics.h"

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