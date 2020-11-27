#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	if (number % 2 == 0)
	{
		std::cout << "Even" << endl;
	}
	else
	{
		std::cout << "Odd" << endl;
	}
}