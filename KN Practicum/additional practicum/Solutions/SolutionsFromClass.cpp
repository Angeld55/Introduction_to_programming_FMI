#include <iostream>

using namespace std;

const int INFINITE_ROOTS = -1;
const int NO_ROOTS = 1;
const int ONE_SOLUTIONS = 0;
const int MAX_SIZE = 16;

//Task1
double findLinearRoot(int a, int b, int &valid)
{
	if (a == 0 && b == 0)
	{
		valid = INFINITE_ROOTS;
		return 0;
	}
	else if (a == 0)
	{
		valid = NO_ROOTS;
		return 0;
	}
	else
	{
		valid = ONE_SOLUTIONS;
		double aCopyDouble = a;
		double bCopyDouble = b;
		return (-bCopyDouble) / aCopyDouble;
	}
}
 

//task 2
void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

void sort(int& first, int& second, int& third)
{
	if (first > second) 
	{
		swap(first, second);
	}

	if (first > third) 
	{
		swap(first, third);
	}
	
	if (second > third)
	{
		swap(second, third);
	}
}


//task 3
bool isPrime(int n)
{
	int rootOfN = sqrt(n);
	for (int i = 2; i <= rootOfN; ++i)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

void printCompositeNumber(int n)
{
	for (int i = 4; i < n; ++i)
	{
		if (!isPrime(i))
			cout << i << "  ";
	}
}

//task 4

// 9 1 7 11 12        11
// 
// 9 1 7 [] 12 
// 9 1  7  12
// 9 1 1 7  12
// 
// 
// 9 11 1 7 12

void print(const int* arr, size_t n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

void rearange(int* arr, size_t size, int i, int j)
{
	if (i > j)
		return; //invalid input;
	int tempSlot = arr[j];
	print(arr, size);
	for (int index = j; index > i; index--)
	{
		arr[index] = arr[index - 1];
		print(arr, size);
	}
	arr[i] = tempSlot;
}

//функцията я правим да връща тип bool, с цел да подсказваме на потребителят дали входа е коректен
bool arrayInput(int* arr)
{
	int n;
	cin >> n;
	if (n > MAX_SIZE)
	{
		return false;
	}

	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	return true;
}

int main()
{

}
