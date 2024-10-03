#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
		
	int thirdDigit = n % 10;
	n /= 10; //remove the lastDigit;

	int secondDigit = n % 10;
	n /= 10; //remove the lastDigit;

	int firstDigit = n % 10;

	int reversed = thirdDigit * 100 + secondDigit * 10 + firstDigit;
	reversed++;

	cout << reversed << endl;
}
