/*
 * Задача:
 * K ще наричаме подчисло на N, ако мултимножеството от цифрите на K е подмножество на мултимножеството на цифрите на N.
 * Напише функция, която приема две естествени числа N и K и връща дали K е подчисло на N
 *
 * Примери:
 * Вход: 13324, 1334
 * Изход: true
 *
 * Вход: 1233 433
 * Изход: false
 *
 */

unsigned int getDigitOcurrences(unsigned int n, unsigned int digit)
{
	if (digit > 9)
		return 0; ///error

	if (n == 0 && digit == 0)
		return 1;
	
	int count = 0;

	while (n != 0)
	{
		int lastDigit = n % 10;
		if (lastDigit == digit
			count++;
		n /= 10;
	}
	return count;
}

bool isSubset(unsigned int n, unsigned int k)
{
	for (int digit = 0; digit <= 9; digit++)
	{
		if (getDigitOcurrences(n, digit) < getDigitOcurrences(k, digit))
			return false;
	}
	return true;
}