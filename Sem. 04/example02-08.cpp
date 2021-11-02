#include <iostream>
using namespace std;


//задача 2:
// Напишете функция, която приема цяло число и връща обърнатото му.
// 1234 - 4321

int reverse(unsigned int n)
{
	unsigned int result = 0;

	while (n != 0)
	{
		int lastDigit = n % 10;
		(result *= 10) += lastDigit;
		n /= 10;
	}

	return result;
}

//задача 3: Напишете функция, която приема цяло число и връща дали е палиндром

//12321 -> true
//123 -> false;

bool isPalindrome(unsigned int n)
{
	return n == reverse(n);
}  
//задача 4: Напишете функция, която приема две цели числа - n и k.
//Функцията да връща дали k е суфикс на n.
// n = 1234 k = 34 true
// n = 1234 k = 234 true
// n = 1234 k = 1234 true
// n = 1234 k = 23 false

bool isSuffix(unsigned int n, unsigned int k)
{
	if (k == 0 && (n % 10 != 0))
		return false;

	while (k != 0)
	{
		int lastDigitOfN = n % 10;
		int lastDigitOfK = k % 10;

		if (lastDigitOfN != lastDigitOfK)
			return false;

		n /= 10;
		k /= 10;
	}

	return true;
}


// задача 5: Напишете функция, която приема две цели числа -n и k.
// Функцията да връща дали k е префикс на n.

// n = 1234, k = 12  true
// n = 1234, k = 23 false;

// u е префикс на w  <-> u ^rev е суфикс на w^rev
bool isPrefix(unsigned int n, unsigned  int k)
{
	return isSuffix(reverse(n), reverse(k));
}

// задача 6: Напишете функция, която приема две числа - n,k.
// Функцията връща дали k е инфикс на n.

bool isInfix(unsigned int n, unsigned int k)
{
	if (n == 0 && k == 0)
		return true;

	while (n > 0)
	{
		if (isSuffix(n, k))
			return true;
		n /= 10;
	}
	return false;
}


//задача.
//Да се напише функция, която приема цяло число и връща дали цифрите му са сортирани.

// 1234 true
// 12379 true
// 1231 false
// 4321 true
// 4325 false
// 1111 true

bool areDigitsSortedAscending(unsigned int n)
{
	while (n >= 10)
	{
		int lastDigit = n % 10;
		int prevLastDigit = (n / 10) % 10;

		if (prevLastDigit > lastDigit)
			return false;

		n /= 10;
	}

	return true;
}

bool areDigitsSortedDescending(int n)
{
	return areDigitsSortedAscending(reverse(n));
}

bool areDigitsSorted(int n)
{
	return areDigitsSortedDescending(n) || areDigitsSortedAscending(n);
}

//задача.
// Напишете функция, която приема цяло число и връща дали се съдържа само от еднакви цифри.

//Вход: 11111 Изход:true
//Вход: 123 Изход: false

bool containOnlyOneDigit(int n)
{
	return areDigitsSortedDescending(n) && areDigitsSortedAscending(n);
}


int main()
{
	cout << containOnlyOneDigit(444) << endl;
}