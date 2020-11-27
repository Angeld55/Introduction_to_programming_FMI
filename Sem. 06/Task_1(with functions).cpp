#include <iostream>
using namespace std;

bool isPrime(int number)
{
	double temp = sqrt(number);
	for (int i = 2; i <= temp; i++)
	{
		if (number % i == 0)
			return false; //Спира функцията и връща отговор - лъжа
	}
	return true;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 6; i <= n; i += 6)
	{
		if (isPrime(i - 1) && isPrime(i + 1))
			cout << i - 1 << " " << i + 1 << endl;
	}

}