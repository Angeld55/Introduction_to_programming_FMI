Прочетете едно цяло число N>20. За всяко едно число от 1 до N отпечатайте следното:

•	"{number} is Great", ако всяка цифра на number е взаимно просто число с N (приемаме че 0 е взамино просто с всяко число) 

•	"{number} is Bad", ако горното не е изпълнено
 
Направете валидация на входа. 

Използвайте функции за всяко действие, което ще направите, но не предобряйте с функциите.

N = 21 -> Great Numbers: 1 2 4 5 8 10 11 12 14 15 18 20 

Решение

```C
#include <stdio.h>

int Euclid(int digit, int N)
{
	if (digit == 0)
	{
		return 1;
	}

	int a = N;
	int b = digit;

	while (b != 0)
	{
		int remainder = a % b;
		a = b;
		b = remainder;
	}

	return a;
}

int checkCoPrimes(int number, int N)
{
	while (number != 0)
	{
		int digit = number % 10;

		int gcd = Euclid(digit, N);

		if (gcd != 1)
		{
			return 0;
		}

		number /= 10;
	}

	return 1;
}

int main()
{
	int N;
	printf("N= ");
	scanf_s("%d", &N);

	if (N <= 20)
	{
		printf("N needs to be bigger than 20!\n");
		return 0;
	}

	for (int number = 1; number < N; number++)
	{
		int areCoPrimes = checkCoPrimes(number, N);

		if (areCoPrimes)
		{
			printf("%d is Great\n", number);
		}
		else
		{
			printf("%d is Bad\n", number);
		}
	}
}
```
