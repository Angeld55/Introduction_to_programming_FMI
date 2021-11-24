void swap(int &first,int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

void specificSequence(int *arr, int size)
{
	bool isEven = true; //On even - > , otherwise <

	for (int i = 0; i < size - 1; i++)
	{
		if (isEven)
		{
			if(arr[i] < arr[i + 1]) //a1 && a2 , a3 && a4 ...
				swap(arr[i], arr[i + 1]);
		}
		else
		{
			if (arr[i] > arr[i + 1]) //a2 && a3 , a4 && a5 ...
				swap(arr[i], arr[i + 1]);
		}
		isEven = !isEven;
	}
}