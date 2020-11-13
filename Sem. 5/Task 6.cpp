#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	cin >> n;

	int currentPosition = 0;
	while (n != 0)
	{
		if (n % 2 == 1) //проверка за последния бит 
		{
			cout << "2^" << currentPosition << " ";
		}
		currentPosition++;
		n >>= 1; // Вече предпоследният бит става последен.  (n /=2);
	}
}