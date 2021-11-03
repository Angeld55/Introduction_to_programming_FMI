#include <iostream>
using namespace std;


const int DIGITS_COUNT = 3;

int getNumLen(int n)
{
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
	while (n != 0)
	{
		int lastDigit = n % 10;

		if (digit == lastDigit)
			return true;

		n /= 10;
	}
	return false;
}
bool containsDiffrentDigits(int n)
{
	while (n >= 10)
	{
		int lastDigit = n % 10;
		n /= 10;

		if (containsDigit(n, lastDigit))
			return false;
	}
	return true;
}

bool isValid(int n)
{
	return getNumLen(n) == DIGITS_COUNT && containsDiffrentDigits(n);
}

void userInput(int& toGuess)
{
	do
	{
		cin >> toGuess;
	} while (!isValid(toGuess));
}

int getBulls(int toGuess, int myGuess)
{
	int bulls = 0;
	while (toGuess != 0)
	{
		int toGuessLastDigit = toGuess % 10;
		int myGuessLastDigit = myGuess % 10;

		if (toGuessLastDigit == myGuessLastDigit)
			bulls++;
		
		toGuess /= 10;
		myGuess /= 10;
	}
	return bulls;
}

int getCows(int toGuess, int myGuess, int bulls)
{
	int cows = 0;
	while (myGuess != 0)
	{
		int lastDigit = myGuess % 10;

		if (containsDigit(toGuess, lastDigit))
			cows++;

		myGuess /= 10;
	}
	return cows - bulls;
}

void getBullsAndCows(int toGuess, int myGuess, int& bulls, int& cows)
{
	bulls = getBulls(toGuess, myGuess);
	cows = getCows(toGuess, myGuess, bulls);
}

int main()
{
	int toGuess;
	userInput(toGuess);

	cout << "Try to guess:" << endl;

	int bulls = 0;
	int cows = 0;

	while (bulls != DIGITS_COUNT)
	{
		int myGuess;
		userInput(myGuess);
		getBullsAndCows(toGuess, myGuess, bulls, cows);

		cout << "Bulls: " << bulls << " " << ", Cows: " << cows << endl;
	}

	cout << "Success!" << endl;
} 
