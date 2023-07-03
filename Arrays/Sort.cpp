#include "Sort.h"

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