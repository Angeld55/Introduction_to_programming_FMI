#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	cin >> n;
	
	if (n < 100)
		cout << "Less than 100" << endl;
	else if (n <= 200)
		cout << "Between 100 and 200" << endl;
	else
		cout << "More than 200" << endl;
}
