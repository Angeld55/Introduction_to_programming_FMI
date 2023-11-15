#include <iostream>
using namespace std;

int getIndexOfSymbol(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	else if (ch >= 'A' && ch <= 'Z')
		return 10 + (ch - 'A');
	else
		return -1;
}

char getSymbolFromIndex(int ind)
{
	if (ind >= 0 && ind <= 9)
		return ind + '0';

	if (ind >= 10)
		return (ind - 10) + 'A';

	return 0;
}

void print(const char arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

//"from" is in K numeral system. The function converts it to decimal (and the result is stored in an int)
unsigned int fromRandomToDecimal(const char from[], size_t size, unsigned k)
{
	int result = 0;

	for (int i = size - 1, mult = 1; i >= 0; i--, mult *= k) //we declare both the array iter (variable i) and mult in the loop
		result += getIndexOfSymbol(from[i]) * mult;
	return result;
}


//converts number from decimal to a number in K numeral system. The result is stored in the array "to"
void fromDecimalToRandom(unsigned n, char to[], size_t size, unsigned k)
{
	for(int arrayIter = size - 1; arrayIter >= 0; arrayIter--) //we fill the array backwards!
	{
		int ind = n % k;
		char current = getSymbolFromIndex(ind);
		to[arrayIter] = current;
		n /= k;
	}
}


//converts the number FROM (k numerical system) TO n numerical system. The result is stored in the array "to".
void fromRandomToRandom(const char from[], size_t fromSize, int k, char to[], size_t toSize, int n)
{
	unsigned int decimal = fromRandomToDecimal(from, fromSize, k);
	fromDecimalToRandom(decimal, to, toSize, n);
}


int main()
{
    constexpr int SIZE = 5;
    {
        char from[] = { '0', 'A', 'A','B', '3' };
        unsigned n = fromRandomToDecimal(from, SIZE, 16); //AAB3 in hex to decimal;
        cout << n << std::endl;;
        
    }
    
    {
        char to[SIZE] = {};
        fromDecimalToRandom(1234, to, SIZE, 16); //124 in decimal to hex;
        print(to, SIZE);
    }
    
    {
        char from[SIZE] = { '0', '0', 'A','B', '3' };
        
        char to[SIZE];
        //init(to, SIZE, '0');
        
        fromRandomToRandom(from, SIZE, 16, to, SIZE, 10);
        
        print(to, SIZE);
    }
}
