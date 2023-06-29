
void Sort(int arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				int buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}

void Sort(double arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
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

void Sort(char arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				char buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}