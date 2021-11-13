#include <iostream>
using namespace std;


//Масиви.
//- последователност от елементи от един тип.
//- Елементите са ПОСЛЕДОВАТЕЛНО разположени в паметта.


// <тип> <име>[<КОНСТАНТА: брой клетки>]

// Елементите са от един тип.
//Елементите са ПОСЛЕДОВАТЕЛНО разположени в паметта.

// Имаме константен достъп до произволен елемент!

// type arr[n]. адрес на k-ия елемент:  arr + k * sizeof(type)
// само с аритметика намираме адреса на клетката

//Ститични масиви - масиви, на които големината трябва да бъде 
// известна преди да се компилира програмта!

void print(const int arr[], int size)
{
	cout << "[ ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << "]" << endl;

	cout << arr[size + 10] << endl;
}

bool linearSearch(const int arr[], int size, int el)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == el)
			return true;
	}
	return false;
}

void f(int arr[])
{
	arr[0] = 44;
}

// Задача:
// Въвежда се цяло число n (n<=1000).
// Отпечатайте всички прости числа в [1...n].

// Решето на Ератостен

//Задача:
// Напишете функция, която приема сортиран масив и елемент
// и връща дали елементът се съдържа в масива

//binary search


bool binarySearch(const int arr[], int n, int el)
{
	int left = 0, right = n - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2; //(right + left) / 2;

		if (arr[mid] == el)
			return true;
		else if (arr[mid] < el)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return false;
}

const int MAX_SIZE = 1000;


void sieveEratosthenes(bool arr[], int n)
{
	arr[0] = arr[1] = false;

	for (int i = 2; i < n; i++)
	{
		if (!arr[i])
			continue;
		int iter = i + i;
		while (iter < n)
		{
			arr[iter] = false; //задраскване
			iter += i;
		}
	}

}
void init(bool arr[], int n, bool value)
{
	for (int i = 0; i < n; i++)
		arr[i] = value;
}

void printPrimeNumbers(bool arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i])
			cout << i << " ";
	}
}

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void myReverse(int arr[], int n)
{
	for (int i = 0; i < n / 2; i++)
		swap(arr[i], arr[n - i - 1]);
}

int main()
{
	//int n;
	//cin >> n;

	//bool arr[MAX_SIZE];
	//init(arr, n, true);

	//sieveEratosthenes(arr, n);
	//printPrimeNumbers(arr, n);

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	print(arr, 8);

	myReverse(arr, 8);
	print(arr, 8);

}

