#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int j = 0;
	while (j <= n)
	{
		cout << j << endl;
		j += 2;
	}
	
	//Here the variable j is reachable! 


	for (int i = 0; i <=n; i++)
	{
		cout << i << endl;
	}
	// Here the variable i is NOT reachable.


}