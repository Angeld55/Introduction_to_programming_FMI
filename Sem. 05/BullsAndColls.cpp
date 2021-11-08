#include <iostream>
using namespace std;

// Задача:
// Играта бикове и крави.
// Въвежда се число от потребителя. (скриваме го)

// Приемаме заявки от вида :
// x
// 2 бика и 2 крави.
const int DIGITS_COUNT = 5;


int getNumberLength(int n)
{
	int count = 0;

	if (n == 0)
		return 1;

	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

bool containsDigit(int n, int searchedDigit)
{
	while (n != 0)
	{
		int lastDigit = n % 10;

		if (lastDigit == searchedDigit)
			return true;

		n /= 10;
	}
	return false;
}

bool onlyDiffrentDigits(int n)
{
	while (n != 0)
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
	return getNumberLength(n) == DIGITS_COUNT &&  onlyDiffrentDigits(n);
}

void userInput(int& input)
{
	do
	{
		cin >> input;
	} while (!isValid(input));
}

int getBulls(int toGuess, int myGuess)
{
	int count = 0;

	while (toGuess != 0)
	{
		int toGuessLastDigit = toGuess % 10;
		int myGuessLastDigit = myGuess % 10;

		if (toGuessLastDigit == myGuessLastDigit)
			count++;

		toGuess /= 10;
		myGuess /= 10;
	}
	return count;
}

int getSumOfBullsAndCows(int  toGuess, int myGuess)
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

void getBullsAndCows(int toGuess, int myGuess, int& bulls, int& cows)
{
	bulls = getBulls(toGuess, myGuess);
	cows = getSumOfBullsAndCows(toGuess, myGuess) - bulls;
}


int main()
{
	int toGuess;
	userInput(toGuess);

	cout << "Success! Try to guess the number:" << endl;

	int bulls = 0;
	int cows = 0;

	while (bulls != DIGITS_COUNT)
	{
		int myGuess;
		userInput(myGuess);
		getBullsAndCows(toGuess, myGuess, bulls, cows);

		cout << "Bulls: " << bulls << " " << "Cows: " << cows << endl;
	}
	cout << "Success!" << endl;

}

