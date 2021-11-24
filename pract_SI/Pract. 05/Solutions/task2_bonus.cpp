#include <iostream>

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void resetChanges(int &index,bool &changesOccured)
{
	index = -1;
	changesOccured = false;
}

bool changeCurrentIndex(int index, int &currentIndex)
{
	return currentIndex = index;
}

void sortNumbers(int *arr, size_t size)
{
	int counter = NULL, min, max, currentIndex;
	bool sortingEvenNumbers = true, changeOccured;

	do
	{
		if (sortingEvenNumbers)
			min = INT_MAX; //reset min
		else
			max = INT_MIN; //reset max

		resetChanges(currentIndex, changeOccured);//reset change flag & index

		for (size_t i = counter; i < size; i++)
		{
			if (sortingEvenNumbers)
			{
				if (arr[i] % 2 == 0 && arr[i] < min)
				{
					min = arr[i];
					changeOccured = changeCurrentIndex(i, currentIndex);
				}
			}
			else
			{
				if (arr[i] % 2 != 0 && arr[i] > max)
				{
					max = arr[i];
					changeOccured = changeCurrentIndex(i, currentIndex);
				}
			}
		}

		if (!changeOccured && sortingEvenNumbers)
		{
			sortingEvenNumbers = !sortingEvenNumbers;
			changeOccured = true;
		}
		else if(changeOccured)
		{
			swap(arr[counter], arr[currentIndex]);
			counter++;
		}
	}while(changeOccured);
}
