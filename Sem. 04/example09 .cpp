#include <iostream>
using namespace std;

unsigned int power(unsigned int n, unsigned int k)
{
	unsigned result = 1;
	
	for(unsigned i = 0; i < k; i++)
	    result*=n;

	return result;
}


int main()
{
	cout << power(5, 4) << endl;
}
