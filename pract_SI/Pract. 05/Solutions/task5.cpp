void swap(int &first,int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

void specificOrderArray(int *arr,int size)
{
	bool isBigger = true;

    for (int i=0; i < size - 1; i++)
    {
        if (isBigger)
            if (arr[i] < arr[i+1])
                swap(arr[i], arr[i+1]);
		else
            if (arr[i] > arr[i+1])
                swap(arr[i], arr[i+1]);
			
        isBigger = !isBigger;
    }
}