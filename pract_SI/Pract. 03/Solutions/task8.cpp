#include <iostream>

using namespace std;

const short LOWERLIMIT = 2;
const short UPPERLIMIT = 9;
const char SEPARATOR = ' ';

int main()
{
	short N;
	char S;
	cin >> N >> S;

	if (N < LOWERLIMIT || N > UPPERLIMIT)
		return -1; //end program

	for (int i = 1; i <= N; i++)
	{
		for (int j = N - i; j > 0; j--)
			cout << SEPARATOR;

		for (int k = 1; k < 2 * i; k++)
			cout << S;

		cout << endl;
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << SEPARATOR;

		for (int k = 1; k < 2 * (N - i); k++)
			cout << S;

		cout << endl;
	}

	return 0;
}