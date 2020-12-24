#include <iostream>
using namespace std;
// Алгоритми върху масиви.
// Пример за алгормитъм.
// Функция, която търси елемент в масив.
// Search arr, el ->
// -1 ako go nqma,  + ako go ima -> indeksa


int linearSearch(const int* arr, int len, int searched)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == searched)
			return i;//връщаме индекса.
	}
	return -1;//елементът го няма
}
// Анализ - кога тези алгоритми са "бързи" и кога са "бавни".
// Сложност на алгоритъм - колко стъпки ще направи алгоритъма.
// Приемаме, че масивът е с n елемента.
// best-case: 1 стъпка  O(1)
// average-case: n/2 стъпки. O(n)
// worst-case: n стъпки. O(n)

// зад 2) Търсене в масив. Масивът е сортиран.

// Двоично търсене (binary search).
//  
int binarySearch(const int* arr, int len, int searched)
{
	int leftIndex = 0;
	int rightIndex = len - 1;
	while (leftIndex <= rightIndex)
	{
		int midIndex = (leftIndex + rightIndex) / 2;
		if (arr[midIndex] == searched)
			return midIndex;
		if (arr[midIndex] > searched)
			rightIndex = midIndex - 1;
		else                           //<
			leftIndex = midIndex + 1;
	}
	return -1;

}
// best-case: 1 стъпка  O(1)
// average-case: O(log(n))
// worst-case: O(log(n))
// Сортиран масив с 70000 елемента -> линейно търсене (70000 стъпки)
//                                 -> двоично търсене (16 стъпки)	 




//Сортиране на масив.
// Пример:  9 6 3 7 -> 3 6 7 9

// Bubble sort (Сортиране по метода на мехурчето)

// "Разходка по масива"
//
void swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

//След една разходка най-големият елемент ще отиде на мястото си.
// след разходка 2-> 2-та най-големи елемента ще са на мясотот си
// след разходка 3-> 3-те ...
//Ако след една разходка, не направим нито един swap, то следва че масивът вече е сортиран.
void bubbleSort(int* arr, int len)
{
	for (int j = 0; j < len - 1; j++)
	{
		bool isSwapped = false;
		for (int i = 0; i < len - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr, i, i + 1);
				isSwapped = true;
			}
		}
		if (!isSwapped)
			return;
	}
}

//Сложност:
// best-case: O(n) 
// average-case:  O(n^2)
// worst-case:   n*(n-1) /2 = (n^2 + n )/2  O(n^2)

// Стабилност: (следващият път)



// Selection sort (сортиране чрез пряка селекция).
//  5 8 1 4 9 

void selectionSort(int* arr, int len)
{
	for (int pos = 0; pos < len - 1; pos++)
	{
		int minIndex = pos;
		for (int i = pos; i < len; i++)
		{
			if (arr[i] < arr[minIndex])
				minIndex = i;
		}
		if (pos != minIndex)
			swap(arr, pos, minIndex);
	}
}

// Сложност:
// best-case: O(n^2)
// average-case:  O(n^2)
// worst-case: О(n^2)

// Selection sort прави минимален брой swap-ове. 


int main()
{
	int arr[] = {5,3,2,6,1,4};
	selectionSort(arr, 6);
	for (int i = 0; i < 6; i++)
		cout << arr[i] << " ";
	//cout << binarySearch(arr, 10, 500);
}
