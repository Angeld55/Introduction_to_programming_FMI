#include <iostream>
using namespace std;

int main()
{
	unsigned int first = 0, second = 0, third = 0;
	cin >> first >> second >> third;

	if (first > 9 || second > 9 || third > 9)
	{
		cout << "Incorrect input data";
	}

	int temp = 0;
	if (first > second)
	{
		temp = first;
		first = second;
		second = temp;
	}

	if (second > third)
	{
		temp = second;
		second = third;
		third = temp;
	}

	if (first > second)
	{
		temp = first;
		first = second;
		second = temp;
	}

	cout << third << second << first;
}
