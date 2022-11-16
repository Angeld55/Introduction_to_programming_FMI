#include <iostream>
using namespace std;

const size_t SIZE = 5;
int getIndexOfSymbol(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	else if (ch >= 'A' && ch <= 'F')
		return 10 + (ch - 'A');
	else
		return -1;
}

char getSymbolFromIndex(int ind)
{
	if (ind >= 0 && ind <= 9)
		return ind + '0';

	if (ind >= 10 && ind <= 15)
		return (ind - 10) + 'A';

	return 0;
}

void print(const char arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

//gets and Number in K numberical system and converts it to integer (in decimal)
unsigned int fromRandomToDecimal(const char from[], unsigned k)
{
	int mult = 1;
	int result = 0;

	for (int i = SIZE - 1, mult = 1; i >= 0; i--, mult *= k)
		result += getIndexOfSymbol(from[i]) * mult;
	return result;
}


//converts from decimal to k-th numerical system. The result is stored in the array "to"
void fromDecimalToRandom(unsigned n, char to[], unsigned k)
{
	int arrayIter = SIZE - 1;
	while (n != 0)
	{
		int ind = n % k;
		char current = getSymbolFromIndex(ind);
		to[arrayIter--] = current;
		n /= k;
	}
}

void init(char arr[], size_t size, char ch)
{
	for (size_t i = 0; i < size; i++)
		arr[i] = ch;
}

//converts the number FROM (k numerical system) TO n numerical system
void fromRandomToRandom(const char from[], int k, char to[], int n)
{
	unsigned int decimal = fromRandomToDecimal(from, k);
	fromDecimalToRandom(decimal, to, n);
}

int main()
{
	char from[] = { '0', '0', 'A','B', '3' };

	char to[SIZE];
	init(to, SIZE, '0');

	fromRandomToRandom(from, 16, to, 10);

	print(to, SIZE);
}
