#include "Shift.h"

template <class A, class B> void shiftLeft(A arr[], B size) {
	int number_of_shifts;
	cout << "¬ведите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		A buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
	}
}

template <class A, class B> void shiftRight(A arr[], B size) {
	int number_of_shifts;
	cout << "¬ведите число сдвига: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		A buffer = arr[size - 1];
		for (int i = size - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}
}