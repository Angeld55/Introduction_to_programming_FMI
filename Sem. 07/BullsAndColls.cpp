#include <iostream>
#include <stdlib.h>    
using namespace std;


//Бикове и крави.
//Число: 1234
//Предположение: 4253 - 2 крави (4 и 3) и 1 бик (2).

bool hasDuplicateDigits(int n) ///1343
{
	const int DIGITCOUNT = 10;
	bool found[DIGITCOUNT];  
	for (int i = 0; i < DIGITCOUNT; i++)
		found[i] = false;
	while (n != 0)
	{
		int lastDigit = n % 10;
		if (found[lastDigit] == true)
			return true;
		else
			found[lastDigit] = true;
		n /= 10;
	}
	return false;
}

void convertNumberToArr(int n, int arr[])
{

	for (int i = 3; i >= 0; i--)
	{
		arr[i] = n % 10;
		n /= 10;
	}

}
int countBulls(int myNumber[], int compNumber[])
{
	int bullsCount = 0;
	for (int i = 0; i <= 3; i++)
	{
		if (myNumber[i] == compNumber[i])
			bullsCount++;
	}
	return bullsCount;
}
int countCows(int myNumber[], int compNumber[])
{
	int cowsCount = 0;

	for (int i = 0; i <= 3; i++)
	{
		int myDigit = myNumber[i];
		for (int j = 0; j <= 3; j++)
		{
			if (j == i) // çà äà íå áðîèì áèêîâåòå
				continue;
			if (myDigit == compNumber[j])
				cowsCount++;
		}
	}
	return cowsCount;
}
int main()
{
	int numberToGuess;
	do
	{
		 numberToGuess = 1000 + rand() % 9000; // [1000..9999]
	}
	while (hasDuplicateDigits(numberToGuess));
	
	cout << "Computer has picked a number! Try to guess it!" <<endl;
	int numberToGuessArr[4];
	
	convertNumberToArr(numberToGuess, numberToGuessArr);

	int bullsCount = 0, cowsCount = 0;
	do
	{
		int myNumber;
		cin >> myNumber;
		int myNumberArr[4];
		convertNumberToArr(myNumber, myNumberArr);

		bullsCount = countBulls(myNumberArr, numberToGuessArr);
		cowsCount = countCows(myNumberArr, numberToGuessArr);

		cout << "Bulls: " << bullsCount << " Cows:" << cowsCount << endl;


	} while (bullsCount != 4);

	cout << "Success!" << endl;
}
