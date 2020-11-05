#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int temp = 1;
	temp = temp << k; 
	
	if ((n & temp) == 0)
		cout << "0";
	else
		cout << "1";

}