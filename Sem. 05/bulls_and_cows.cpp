#include <iostream>
using namespace std;

const int DIGITS_COUNT = 4;

int getLength(int n)
{
	if (n == 0)
		return 1;

	int count = 0;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return count;
}

bool containsDigit(int n, int digit)
{
	if (digit < 0 || digit > 9)
		return false; ///invalid input
	
	if(n == 0 && digit == 0)
		return 1;

	while (n != 0)
	{
		int lastDigit = n % 10;
		if (lastDigit == digit)
			return true;
		n /= 10;
	}
	return false;
}

bool containsOnlyDiffrentDigits(int n)
{
	while (n != 0)
	{
		int lastDigit = n % 10;
		int rem = n / 10;

		if (containsDigit(rem, lastDigit))
			return false;
		n = rem;
	}
	return true;
}

bool isValidInput(int input)
{
	return (getLength(input) == DIGITS_COUNT && containsOnlyDiffrentDigits(input));
}

void userInput(int& input)
{
	do
	{
		cin >> input;
	} while (!isValidInput(input));
}

int getBullsCount(int toGuess, int myGuess)
{
	int count = 0;
	while (toGuess != 0)
	{
		if (toGuess % 10 == myGuess % 10)
			count++;
		toGuess /= 10;
		myGuess /= 10;
	}
	return count;
}

int getBullsAndCowsSum(int toGuess, int myGuess)
{
	int count = 0;

	while (myGuess != 0)
	{
		int lastDigit = myGuess % 10;
		if (containsDigit(toGuess, lastDigit))
			count++;
		myGuess /= 10;
	}
	return count;
}

void calculateBullsAndCows(int toGuess, int myGuess, int& bulls, int& cows)
{
	bulls = getBullsCount(toGuess, myGuess);
	cows = getBullsAndCowsSum(toGuess, myGuess) - bulls;
}
int main()
{
	int toGuess;
	userInput(toGuess);
	cout << "Success! Try and guess it." << endl;

	int bulls = 0;
	int cows = 0;

	while (bulls != DIGITS_COUNT)
	{
		int myGuess;
		userInput(myGuess);
		calculateBullsAndCows(toGuess, myGuess, bulls, cows);
		cout << "Bulls: " << bulls << " , Cows: " << cows << endl;
	}
	cout << "Success!" << endl;
}
