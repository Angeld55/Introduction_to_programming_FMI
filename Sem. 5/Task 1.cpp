#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	cin >> n;

    //Решение 1:
	bool isPrime1 = true;
	for (int i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)
			isPrime1 = false;
	}
	cout << isPrime1 << endl;
	// Решението работи. Но прави излишни проверки. Не е необходимо да търсим делител чак до n-1.
	// Ако не намерим делител от корен(n), то няма да намерим и след корена. 

	//Решение 2:
	bool isPrime2 = true;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			isPrime2 = false;
	}
	cout << isPrime2 << endl;

	// Решението пак работи. Но на всяка проверка i <= sqrt(n) пресмятаме корен(n), което е очевидно, че е излишно.
	// Може да го сметнем веднъж и после да го ползваме.

	//Решение 3:
	bool isPrime3 = true;
	double temp = sqrt(n);
	for (int i = 2; i <= temp; i++)
	{
		if (n % i == 0)
			isPrime3 = false;
	}
	cout << isPrime3 << endl;

	// И това решение дава верен резултат. Но отново е възможно да прави излишни проверки.
	// При въвеждане на числото 2000000, очевидно би било, че числото НЕ е просто, понеже се дели на 2.
	// Но нашето решение ще продължи да търси делители, дори след като е видяло, че има такъв (в случая числото 2).

	//Финално решение:
	bool isPrime4 = true;
	double temp2 = sqrt(n);
	for (int i = 2; i <= temp2; i++)
	{
		if (n % i == 0)
		{
			isPrime4 = false;
			break;
		}
	}
	cout << isPrime4 << endl;
}