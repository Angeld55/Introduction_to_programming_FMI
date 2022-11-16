/*
 * Задача:
 * Подчисло на N ще наричаме число, което е получено чрез премахването на 0 или няколко цифри на N.
 * Напишете функция, която приема естествено число N и връща сумата на всички подчисла на N.
 * 
 * Пример: 
 * Вход: 123
 * Изход: 177
 *
 */

 unsigned int getNumLength(unsigned n)
{
	unsigned int count = 0;

	if (n == 0)
		return 1;

	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return count;
}

unsigned int power(unsigned n, unsigned power)
{
	unsigned res = 1;
	for (unsigned i = 0; i < power; i++)
		res *= n;
	return res;
}

unsigned int getSubnumber(unsigned n, unsigned mask)
{
	unsigned subNumber = 0;
	unsigned mult = 1;

	while (n != 0)
	{
		if (mask % 2 == 1)
		{
			subNumber += (mult * (n % 10));
			mult *= 10;
		}
		mask /= 2;
		n /= 10;
	}
	return subNumber;
}

unsigned int getSumOfSubnumbers(unsigned int n)
{
	unsigned int len = getNumLength(n);
	unsigned int subNumbersCount = power(2, len);
	
	unsigned int sum = 0;

	for (int i = 0; i < subNumbersCount; i++)
		sum += getSubnumber(n, i);
	return sum;
}