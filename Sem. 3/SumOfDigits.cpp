#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int digitSum = 0;

	while (n != 0)
	{
		int lastDigit = n % 10; //extracts last digit
		digitSum += lastDigit; //adds it to the sum
		n /= 10; //removes last digit
	}

	cout << digitSum;
	

}