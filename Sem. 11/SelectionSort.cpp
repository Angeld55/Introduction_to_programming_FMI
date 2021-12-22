#include <iostream>
using namespace std;


void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void bubbleSort(int* arr, unsigned size)
{
	for (unsigned j = 0; j < size - 1; j++)
	{
		bool isSwapped = false;

		for (unsigned i = 0; i < size - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				isSwapped = true;
			}
		}

		if (!isSwapped)
			return;
	}
}



// Инверсия:  i < j arr[i] > arr[j]
// Масив е сортиран, когато в него няма инверсии.

//bubbleSort на една стъпка чупи една инверсия.

// В масив средно колко инверсии?

//Колко най-много инверсии може да имаме ? binom(n,2) = n * (n-1)/ 2

// Каква е вероятността два конкретни елемента да са в инвесия.

// Сортираме числата {1...n}

// Вероятност <i,j> да са в инвесия = всички перм. на {1...n}, в които i е в инверсия в j  n!/2
								     /всички пермутации       = n!

// Вероятност два индекса да са в инверсия: 1 / 2


//Средно колко инверсии имаме в масив: Възможности за инверсия * вероятност да се случи тази инверсия
//                                      n * (n - 1) / 2        *  1/2 = 

// Среден брой инверсии: n * (n-1)/ 4
// Бъбъл сорт на една стъпка чупи най-много една инвесия.
// => средните стъпки на бъбълсорт >= n * (n-1)/ 4  =  О(n^2)


[][][][][][][][]

void selectionSort(int* arr, unsigned size)
{
	for (unsigned i = 0; i < size - 1; i++)
	{
		//findMin
		int minElementIndex = i;
		for (unsigned j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minElementIndex])
				minElementIndex = j;
		}
		if (minElementIndex != i)
			swap(arr[i], arr[minElementIndex]);
	}
}

int main()
{
	int arr[] = { 1,2,2,1, 1 };
	selectionSort(arr, 5);

	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
}
