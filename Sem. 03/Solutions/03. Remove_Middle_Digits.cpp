#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int digits = 0, reversedN;
	for (int i = n; i != 0; i /= 10)
		digits++;

	int tenToTheHalf = 1; // ten to the power of digits to take from each end
	int digitsToTakeFromEachEnd = digits / 2 + (digits % 2 - 1);
	for (int i = 0; i < digitsToTakeFromEachEnd; i++)
		tenToTheHalf *= 10;

	int tenToTheMiddle = (digits % 2 == 0) ? 100 : 10; // ten to the power of digits to remove from the middle

	int resultNumber = (n % tenToTheHalf) + (n / tenToTheHalf / tenToTheMiddle) * tenToTheHalf;

	cout << resultNumber << ", " << resultNumber + 1 << endl;
}
