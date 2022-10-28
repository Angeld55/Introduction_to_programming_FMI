#include <iostream>

using namespace std;

int main()
{
	unsigned n = 0;
	cin >> n;

	unsigned result = 0;
	do
	{
		result += (n % 10);
		n /= 10;
	} while (n != 0);


	//BONUS
	while (result >= 10)
	{
		int resultCopy = result;
		result = 0;
		while (resultCopy != 0)
		{
			result += (resultCopy % 10);
			resultCopy /= 10;
		}
	}

	cout << result;
}
