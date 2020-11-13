#include <iostream>
using namespace std;

int main()
{
	unsigned int n, k;
	cin >> n >> k;

	//Смятаме n*k.  n+n+n...+n (k пъти).
	//Прилагаме кода от предишната задача k пъти
	

	int result = 0;

	// Изпъллнява се k пъти.
	for (int t = 0; t < k; t++)
	{
	
		//Събира result с n
		for (int i = 0; i < n; i++)
		{
			//Събираме result с 1.
			int mask = 1;
			while ((result & mask) > 0)
			{
				result ^= mask;
				mask <<= 1;
			}
			result |= mask;
		}
	}
	cout << result << endl;
}