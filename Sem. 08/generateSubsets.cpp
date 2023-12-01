#include <iostream>
using namespace std;

void printSubset(const int arr[], size_t size, unsigned mask)
{
	cout << "{ ";
	for (int i = size - 1; i >= 0; i--)
	{
		if (mask % 2 != 0)
			cout << arr[i] << " ";
		mask /= 2;
	}
	cout << "} " << endl;

}

unsigned powerOfTwo(unsigned n)
{
	return 1 << n;
}
void generateSubsets(const int arr[], size_t size)
{
	//size <= 32
	unsigned pt = powerOfTwo(size);
	for (unsigned i = 0; i < pt; i++)
		printSubset(arr, size, i);
}
int main()
{
	constexpr size_t SIZE = 5;
	int arr[SIZE] = { 1,2,3,4,5 };

	generateSubsets(arr, SIZE);
}
