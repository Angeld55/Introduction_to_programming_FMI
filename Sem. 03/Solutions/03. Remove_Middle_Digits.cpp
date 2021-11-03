#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int digits = 0;
	for (int i = n; i != 0; i /= 10)
		digits++;

	int tenToTheHalf = 1; // 10 to the power of digits to take from each end (calculated in the loop below)

	for (int endDigits = digits / 2 + (digits % 2 - 1); endDigits > 0; endDigits--)
		tenToTheHalf *= 10;

	int tenToTheMiddle = (digits % 2 == 0) ? 100 : 10; // 10 to the power of digits to remove from the middle

	int resultNumber = (n % tenToTheHalf) + (n / tenToTheHalf / tenToTheMiddle) * tenToTheHalf;

	cout << resultNumber << ", " << resultNumber + 1 << endl;
}
