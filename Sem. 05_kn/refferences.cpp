#include <iostream>
using namespace std;


int f(int n)
{
	n++;
	return n;
}

// lvalue ("връщане на променлива")
// rvalue ("връщане на константа")

//Референция - друго име за някоя променлива

// Пример: 
// Напишете функция, която приема цяло число и връща най-голямата и най-малката цифра.

void getMaxAndMinDigit(int n, int& maxDigit, int& minDigit)
{
	int max = 0;
	int min = 9;

	while (n != 0)
	{
		int lastDigit = n % 10;

		if (lastDigit > max)
			max = lastDigit;

		if (lastDigit < min)
			min = lastDigit;

		n /= 10;
	}
	maxDigit = max;
	minDigit = min;

}

//!

int& f(int& n) //--няма да върне копие.
{
	n++;
	return n;
}

int main()
{
	int n;
	cin >> n;

	int max, min;

	getMaxAndMinDigit(n, max, min);
	cout << "Min digit " << min << " " << "max digit " << max << endl;
}





#include <iostream>
using namespace std;

// lvalue ("връщане на променлива")
// rvalue ("връщане на константа")

//Референция - друго име за някоя променлива

//Пример: 
// Напишете функция, която приема цяло число и връща най-голямата и най-малката цифра.

void getMaxAndMinDigit(int n, int& maxDigit, int& minDigit)
{
	int max = 0;
	int min = 9;

	while (n != 0)
	{
		int lastDigit = n % 10;

		if (lastDigit > max)
			max = lastDigit;

		if (lastDigit < min)
			min = lastDigit;

		n /= 10;
	}
	maxDigit = max;
	minDigit = min;

}


int f1(int& n) //-връщат константа (rvalue)
{
	n++;
	return n;
}
int& f2(int& n) //--връщат променлива (lvalue).
{
	n++;
	return n;
}
///!!!!!!!!!!! error
int& f3()
{
	int a = 10;
	return a;
}
int main()
{
	cout << ++f();


}
