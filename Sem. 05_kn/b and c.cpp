#include <iostream>
using namespace std;

const int GAME_NUMBER_LENGTH = 5;

int lengthOfNumber(unsigned int n)
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
	if (digit < 0 || digit > 9)
		return false;

	while (n != 0)
	{
		int lastDigit = n % 10;
		if (lastDigit == digit)
			return true;
		n /= 10;
	}
	return false;
}
bool containsOnlyDiffrentDigits(unsigned int n)
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

bool isValidInput(unsigned int input)
{
	return lengthOfNumber(input) == GAME_NUMBER_LENGTH && containsOnlyDiffrentDigits(input);
}

void userInput(unsigned int& n)
{
	do
	{
		cin >> n;
	} while (!isValidInput(n));
}

unsigned int getBullsCount(unsigned int toGuess, unsigned int myGuess)
{
	unsigned int count = 0;

	while (toGuess != 0)
	{
		if (toGuess % 10 == myGuess % 10)
			count++;
		myGuess /= 10;
		toGuess /= 10;
	}
	return count;
}

int getBullsAndCowsSum(unsigned int toGuess, unsigned int myGuess)
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
void calculateBullsAndCows(unsigned int toGuess, unsigned int myGuess, unsigned int& bulls, unsigned int& cows)
{
	bulls = getBullsCount(toGuess, myGuess);
	cows = getBullsAndCowsSum(toGuess, myGuess) - bulls;
}
int main()
{
	cout << "Enter a number guess" << endl;
	unsigned int toGuess;
	userInput(toGuess);
	cout << "Success! Thanks!" << endl;

	unsigned int bulls = 0;//
	unsigned int cows = 0;

	while (bulls != GAME_NUMBER_LENGTH)
	{
		unsigned int myGuess;
		userInput(myGuess);
		calculateBullsAndCows(toGuess, myGuess, bulls, cows);

		cout << "Bulls: " << bulls << " " << "Cows: " << cows << endl;
	}

	cout << "Success" << endl;

}