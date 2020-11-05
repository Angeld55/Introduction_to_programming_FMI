#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n & 1 == 1)
		cout << "Odd";
	else
		cout << "Even";

}