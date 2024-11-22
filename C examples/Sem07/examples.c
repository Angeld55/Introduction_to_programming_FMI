#include <stdio.h>

int linearSearch(const int arr[], size_t size, int el)
{
	for (unsigned i = 0; i < size; i++)
	{
		if (arr[i] == el)
			return 1;//true
	}
	return 0; //false
}

int binarySearch(const int arr[], size_t size, int el)
{
	int leftIndex = 0;
	int rightIndex = size - 1;

	while (leftIndex <= rightIndex)
	{
		int midIndex = leftIndex + (rightIndex - leftIndex) / 2; // (left + right) / 2; //left + right may overflow the int !!

		if (arr[midIndex] > el)
		{
			rightIndex = midIndex - 1;
		}
		else if (arr[midIndex] < el)
		{
			leftIndex = midIndex + 1;
		}
		else
		{
			return 1; //true!!
		}
	}
	return 0; //false
}


void reverseArray(int arr[], size_t size)
{
	for (unsigned i = 0; i < size / 2; i++)
	{
		//swap i <-> size - i - 1

		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

void printArr(const int arr[], size_t size)
{
	for (unsigned i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

#define MAX_ARR 1024

void markAsNotPrime(int sieve[MAX_ARR],
					unsigned n,
					unsigned currPrime)
{
	unsigned toMark = currPrime + currPrime;
	while (toMark <= n)
	{
		sieve[toMark] = 1;
		toMark += currPrime;
	}
}

void sieveEratosthenes(unsigned n)
{
	int sieve[MAX_ARR] = { 0 };
	for (unsigned i = 2; i <= n; i++)
	{
		if (!sieve[i])
		{			printf("%d ", i);
			markAsNotPrime(sieve, n, i);
		}
	}
}

int main() 
{

	sieveEratosthenes(1000);
	printf("%d", a);
	return 0;
}
