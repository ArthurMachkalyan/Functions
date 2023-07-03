#include "Print.h"

template <class A, class B> void
Print(A arr[], B size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}