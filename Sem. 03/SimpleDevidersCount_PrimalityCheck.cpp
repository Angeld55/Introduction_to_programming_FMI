#include <iostream>

using namespace std;

int main()
{
	unsigned int n; //allways positive int
	cin >> n;

	int divCount = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
			divCount++;
	}

	if (divCount == 2)
	{
		cout << "Prime" << endl;
	}
	else
	{
		cout << "Not a prime" << endl;
	}

	

}
