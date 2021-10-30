
#include <iostream>
using namespace std;

/*
<параметри> = <тип> <име>
<тип на връщане> <идентификатор> (<параметри>)
{
 // тяло на функцията/
 
 //return - какво връща функцията в този случай.
}

*/


//задача 1:
// Въвежда се цяло число n. 
// Да се отпечатат всички двойки прости числа, които са 
// във вида 6k-1 и 6k+1 и са по по-малки от n.

// n = 50
// 5 7
// 11 13
// 17 19
// 41 43

bool isPrime(int n)
{
	double temp = sqrt(n);

	if (n < 2)
		return false;

	for (int i = 2; i <= temp; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}



//задача 2:
// Напишете функция, която приема число и връща обърнатото.
// Вход: 1234  Изход: 4321

int reverse(int n)
{
	int result = 0;
	while (n != 0)
	{
		int lastDigit = n % 10;
		(result *= 10) += lastDigit; // result = (result = result * 10) + lastDigit
		n /= 10;
	}
	return result;
}

//задача 3:
// Напишете функция, която приема число и връща дали е палиндром.
// Вход: 121  Изход: true
// Вход: 1213  Изход: false
bool isPalindrome(int n)
{
	return reverse(n) == n;
}

//задача 4: Напишете функция, която приема две цели числа - n и k.
// и връща дали k е суфикс на n.

// n = 1234
// k =   34  true

// n = 1234
// k =  23  false

bool isSuffix(unsigned n, unsigned k)
{
	if (n < k)
		return false;

	while (k != 0)
	{
		int nLastDigit = n % 10;
		int kLastDigit = k % 10;

		if (nLastDigit != kLastDigit)
			return false;

		n /= 10;
		k /= 10;
	}

	return true;
}
//  w is pref u  <-> w^rev is suff u^rev
 
//задача 5: Напишете функция, която приема две цели числа (n, k) 
//и връща дали k е префикс на n.
bool isPrefix(unsigned n, unsigned k)
{
	return isSuffix(reverse(n), reverse(k));
}

//задача 6: Напишете функция, която приема две цели числа (n,k)
// и връща дали k е инфикс на n.
bool isInfix(unsigned n, unsigned k)
{
	while (n > k)
	{
		if (isSuffix(n, k))
			return true;
		n /= 10;
	}
	return false;
}

// задача 7: Напишете функция, която приема цяло число и връща
// дали цифрите му са сортирани.

// -> възходящо
// -> низходящо
bool areDigitsSortedIncreasing(unsigned n)
{
	cout << "areDigitsSortedIncreasing" << endl;
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

bool areDigitsSortedDecreasing(unsigned n)
{
	cout << "areDigitsSortedDecreasing" << endl;
	return areDigitsSortedIncreasing(reverse(n));
}

bool areDigitsSorted(int n)
{
	return areDigitsSortedIncreasing(n) || areDigitsSortedDecreasing(n);
}

//задача 8: Въвежда се цяло число. Отпечатайте дали се състои от еднакви цифри
// 111111 - труе
// 123432 - фалсе

bool areDigitsTheSame(int n)
{
	return areDigitsSortedIncreasing(n) && areDigitsSortedDecreasing(n);
}

void print(int n)
{
	cout << n << endl;

	return; //функцията да приключи 

	//code - кодът е недостижим
}

int main()
{
	int n;
	cin >> n;


	//task1
	// GOOD

	//for (int i = 6; i < n; i += 6)
	//{
	//	if (isPrime(i - 1) && isPrime(i + 1))
	//		cout << i - 1 << " " << i + 1 << endl;
	//}




	//task1
	//BAD


	//for (int i = 6; i < n; i += 6)
	//{
	//	int firstToCheck = i - 1;
	//	int secondToCheck = i + 1;

	//	//primality check for the first

	//	bool isFirstPrime = true;
	//	double sqrtFirst = sqrt(firstToCheck);
	//	for (int j = 2; j <= sqrtFirst; j++)
	//	{
	//		if (firstToCheck % j == 0)
	//		{
	//			isFirstPrime = false;
	//			break;
	//		}
	//	}
	//	if (!isFirstPrime)
	//		continue;


	//	//primality check for the second 

	//	bool isSecondPrime = true;
	//	double sqrtSecond = sqrt(secondToCheck);
	//	for (int j = 2; j <= sqrtSecond; j++)
	//	{
	//		if (secondToCheck % j == 0)
	//		{
	//			isSecondPrime = false;
	//			break;
	//		}
	//	}

	//	if (isSecondPrime)
	//		cout << firstToCheck << " " << secondToCheck << endl;
	//}
}
