#include <iostream>
using namespace std;

int main()
{
	double first = 0, second = 0, third = 0;
	cin >> first >> second >> third;

	if (first <= 0 || second <= 0 || third <= 0)
	{
		cout << "Incorrect input data";
	}
	else if ((first + second) > third &&
			(second + third) > first &&
			(first + third) > second)
	{
		cout << "This triangle exists.";
	}
	else
	{
		cout << "This triangle doesn't exist.";
	}
}
