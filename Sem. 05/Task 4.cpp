#include <iostream>
using namespace std;

int main()
{
	unsigned int n, k;
	cin >> n >> k;


	//Изпълняваме k пъти събирането на n с 1
	for (int i = 0; i < k; i++)
	{
		//Събираме n с 1-ца (кодът от миналата задача)
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
