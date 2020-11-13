#include <iostream>
using namespace std;

int main()
{
	unsigned int n, k;
	cin >> n >> k;


	//Прилагаме k пъти събиране на n с 1.
	for (int i = 0; i < k; i++)
	{
		//Кодът от миналата задача - събираме n с 1.
		int mask = 1;
		while ((n & mask) > 0)
		{
			n ^= mask;
			mask <<= 1;
		}
		n |= mask;
	}
	cout << n << endl;
}