#include <iostream>
#define SEPARATOR " ";
using namespace std;

int* createArray(size_t N)
{
	int* arr = new int[N];
	
	for (size_t i = 0; i < N; i++)
		arr[i] = NULL;

	return arr;
}

void initialize(int *arr,size_t size)
{
	for (size_t i = 0; i < size; i++)
		cin >> arr[i];
}

void print(int *arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
		cout << arr[i] << SEPARATOR;
}

void Free(int *arr)
{
	delete[] arr;
}

int main()
{
	int N; cin >> N;
	int *arr = createArray(N);
	initialize(arr, N);
	print(arr, N);
	free(arr);
}