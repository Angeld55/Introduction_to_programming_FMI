#include <iostream>
using namespace std;

unsigned int toBinaryFromDecimal(unsigned int n, unsigned int& zeros, unsigned int& ones)
{
    zeros = ones = 0;
	int result = 0;
	int mult = 1;
	while (n != 0)
	{
		if (n % 2 == 1)
		{
			result += mult;
			ones++;
		}
		else
		    zeros++;
		mult *= 10;
		n /= 2;
	}
	return result;
}


int main()
{
    unsigned int zeros, ones;
    cout<< toBinaryFromDecimal(130, zeros, ones) << endl;
    cout << ones << " " << zeros;
    return 0;
}
