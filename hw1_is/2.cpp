#include <iostream>
using namespace std;

///////START/// Function written in class (we can reuse it)
unsigned countDigitOccurences(unsigned n, unsigned digit)
{
	if (digit == 0 && n == 0)
		return 1;

	unsigned count = 0;
	while (n != 0)
	{
		int lastDigit = n % 10;
		if (lastDigit == digit)
			count++;
		n /= 10;
	}
	return count;
}
/// END///////


bool isPermutation(unsigned n, unsigned k)
{
	for (int i = 0; i <= 9; i++)
	{
		if (countDigitOccurences(n, i) != countDigitOccurences(k, i))
			return false;
	}
	return true;
}
void printPermutations(unsigned n)
{
	for (int i = 1000; i <= 9999; i++)
	{
		if (isPermutation(n, i))
			cout << i << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	printPermutations(n);
}   
