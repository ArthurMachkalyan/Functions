#include "FillRand.h"

template <class A, class B> void FillRand(A arr[], B size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}