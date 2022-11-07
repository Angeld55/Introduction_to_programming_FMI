#include <iostream>

using namespace std;

//task1
unsigned digitCountInNumber(int num)
{
	unsigned result = 0;
	while (num != 0)
	{
		++result;
		num /= 10;
	}
	return result;
}

int mthDigit(int n, unsigned m)
{
	if (m >= digitCountInNumber(n))
		return -1;

	for (unsigned i = 0; i < m; ++i)
		n /= 10;
	return n % 10;
}

//swap binary numbers task
//"Изнасяме" този код във функция, защото го преизползваме, като използвайки референции работим с "оригиналните" променливи
void validation(bool& toReturn, unsigned& number, unsigned& counterLenNum, unsigned& counterOf1s)
{
	while (number != 0 && toReturn)
	{
		++counterLenNum;
		unsigned lastDigit = number % 10;
		if (lastDigit == 0)
		{
			number /= 10;
			continue;
		}
		else if (lastDigit == 1)
		{
			++counterOf1s;
			number /= 10;
			continue;
		}
		toReturn = false;
	}
}


bool validNumbers(unsigned number1,unsigned number2, unsigned n)
{
	unsigned counterLenNum1 = 0;
	unsigned counterOf1sNum1 = 0;
	bool okay = true;
	validation(okay, number1, counterLenNum1, counterOf1sNum1);

	if (!okay)
		return false;

	unsigned counterLenNum2 = 0;
	unsigned counterOf1sNum2 = 0;
	validation(okay, number2, counterLenNum2, counterOf1sNum2);

	return ((counterOf1sNum1 == counterOf1sNum2) && (counterLenNum1 <= n) && (counterLenNum2 <= n) && okay);
}

//Правим функцията от булев тип, за да проследим дали входа е валиден или не
bool inputNumbers(unsigned n, unsigned& number1, unsigned& number2)
{
	cin >> number1;
	cin >> number2;

	return validNumbers(number1, number2, n);
}

int getSwaps()
{
	unsigned n = 0;
	cin >> n;
	unsigned number1 = 0, number2 = 0;
	
	if (!inputNumbers(n, number1, number2))
		return 0;

	unsigned result = 0;

	if (number1 == number2)
		return result;

	//Броим едениците, които не са на "местата" си и те отговарят на броя swap-ове
	while (number1 != 0 || number2 != 0)
	{
		unsigned lastDigitOfNum1 = number1 % 10;
		if ((lastDigitOfNum1 == 1) && (lastDigitOfNum1 != number2 % 10))
			++result;

		number1 /= 10;
		number2 /= 10;
	}

	return result;
}



int main()
{

}