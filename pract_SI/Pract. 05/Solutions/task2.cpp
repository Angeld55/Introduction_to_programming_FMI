void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sortNumbers(int *arr, size_t size)
{
	int leftNumber = 0, rightNumber = size - 1;

	while (leftNumber < rightNumber)
	{
		while (arr[leftNumber] % 2 == 0 && leftNumber < rightNumber)
			leftNumber++;

		while (arr[rightNumber] % 2 == 1 && leftNumber < rightNumber)
			rightNumber--;

		if (leftNumber < rightNumber)
		{
			swap(arr[leftNumber], arr[rightNumber]);
			leftNumber++;
			rightNumber--;
		}
	}
}