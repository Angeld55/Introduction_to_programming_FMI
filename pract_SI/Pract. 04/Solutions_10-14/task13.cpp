#include<iostream>
using namespace std;

int input()
{
	int number;
	do
	{
		cout << "Enter a valid number: ";
		cin >> number;
	} while (!cin || number < 100 || number > 100000);
	return number;
}

int dist(int number1, int number2)
{
	int diff = number1 - number2;
	return diff >= 0 ? diff : -diff;
}

int closestLargerPowerOf2(int number)
{
	int power = 1;
	while (power < number)
	{
		power <<= 1;
	}
	return power;
}

int main()
{
	int number = input();
	int larger = closestLargerPowerOf2(number);
	int smaller = larger >> 1;

	int distToSmaller = dist(number, smaller);
	int distToLarger = dist(number, larger);

	cout << "Closest power of two to " << number << ": " << ((distToSmaller < distToLarger) ? smaller : larger) << endl;

	return 0;
}