#include <iostream>
using namespace std;

int main()
{
	int first = 0, second = 0, third = 0;
	cin >> first >> second >> third;

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


	cout << first << ' ' << second << ' ' << third;
}
