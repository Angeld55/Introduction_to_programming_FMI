bool isNumberInArray(const int *arr, int size,int number)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
			return true;
	}

	return false;
}