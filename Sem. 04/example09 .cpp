#include <iostream>
using namespace std;

unsigned int log(unsigned int n, unsigned int k)
{
	int count = 0;

	while (n >= k)
	{
		n /= k;
		count++;
	}

	return count;
}


int main()
{
	cout << log(4, 10) << endl;
}