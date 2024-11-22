#include <iostream>
using namespace std;


int main()
{
	unsigned n; 
	std::cin >> n;

	unsigned res = 0;
	for (unsigned i = 0; i < n; i++)
	{
		int curr;
		cin >> curr;
		res ^= curr;
	}
	std::cout << res;

}
