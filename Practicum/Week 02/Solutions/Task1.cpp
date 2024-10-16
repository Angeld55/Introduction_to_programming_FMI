#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cin >> number;

	if (number > 0)
	{
		cout << "Positive";
	}
	else if (number < 0)
	{
		cout << "Negative";
	}
	else
	{
		cout << "Zero";
	}
}
