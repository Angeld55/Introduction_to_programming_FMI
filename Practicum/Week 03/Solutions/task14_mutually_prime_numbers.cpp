#include <iostream>
using namespace std;

int main()
{
	unsigned int number = 0;
	cin >> number;

	unsigned int sum = 0;
	int current = 0;
	cin >> current;

	while (current != -1)
	{
		int first = number;
		int second = current;

		if (first < second) //swap
		{
			int temp = first;
			first = second;
			second = temp;
		}

		while (second != 0)
		{
			int mod = first % second;
			first = second;
			second = mod;
		}

		if (first == 1)
		{
			sum += current;
		}

		cin >> current;
	}

	cout << sum;
}