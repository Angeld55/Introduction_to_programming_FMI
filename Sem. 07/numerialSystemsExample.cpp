#include <iostream>
using namespace std;

const unsigned MAX_SIZE = 32;

char getCharByNumber(unsigned number)
{
	if (number <= 9)
		return '0' + number;
	if (10 <= number && number <= 35)
		return 'A' + (number - 10);
	else
		return 'a' + (number - 36);
}

unsigned getNumberByChar(char ch)
{
	if ('0' <= ch && ch <= '9')
		return ch - '0';
	if ('A' <= ch && ch <= 'Z')
		return 10 + ch - 'A';
	if ('a' <= ch && ch <= 'z')
		return 32 + ch - 'a';
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void convertFromDecimal(unsigned number, char result[], unsigned k)
{
	unsigned resultInd = 0;
	while (number != 0)
	{
		int symbolIndex = number % k;
		result[resultInd++] = getCharByNumber(symbolIndex);
		number /= k;
	}

	for (unsigned i = 0; i < resultInd / 2; i++)
		swap(result[i], result[resultInd - 1 - i]);

}

unsigned convertToDecimal(const char number[], unsigned size, unsigned k)
{
	unsigned mult = 1;

	unsigned result = 0;
	for (int i = size - 1; i >= 0; i--)
	{
		result += getNumberByChar(number[i]) * mult;
		mult *= k;
	}

	return result;
}

//fill with spaces from start
void init(char buff[], unsigned start)
{
	for (unsigned i = start; i < MAX_SIZE; i++)
		buff[i] = ' ';
}

void print(const char buff[])
{
	for (unsigned i = 0; i < MAX_SIZE; i++)
		cout << buff[i];
	cout << endl;
}

int main()
{
	{
		unsigned n = 12345;
		char buff[MAX_SIZE];
		init(buff, 0);

		convertFromDecimal(123456, buff, 16);

		cout << n << " to hex: ";
		print(buff);
	}

	{
		unsigned n = 12345;
		char buff[MAX_SIZE] = { 'A', '1', '2', 'B' };
		init(buff, 5);

		unsigned result = convertToDecimal(buff, 4, 16);

		cout << buff << " to decimal: " << result << endl;
	}
}

