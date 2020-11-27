#include <iostream>
using namespace std;

const int SIZE = 32;

int Convert(bool arr[SIZE])
{
	int result = 0;
	for (int i = 31; i >= 0; i--)
		result += arr[i] * (1 << 31-i);
	return result;
}
int main()
{
	bool arr[SIZE] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1 };
	cout << Convert(arr);
}