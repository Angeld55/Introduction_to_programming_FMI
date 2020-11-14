#include <iostream>
using namespace std;

int main()
{
	unsigned int n, k;
	cin >> n >> k;

	//Ñìÿòàìå n*k.  n+n+n...+n (k ïúòè).
	//Ïðèëàãàìå êîäà îò ïðåäèøíàòà çàäà÷à k ïúòè
	

	int result = 0;

	//Събирането с n го правим k пъти. Т.е става точно n*k
	for (int t = 0; t < k; t++)
	{
	
		//Събирането с 1 го правим пъти. Т.е става +n 
		for (int i = 0; i < n; i++)
		{
			//Събираме n с 1.
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
