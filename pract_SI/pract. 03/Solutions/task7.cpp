#include <iostream>
#define LIMIT 5
#define SEPARATOR " "

using namespace std;

//const short LIMIT = 5;
//const char SEPARATOR = ' ';


int main()
{
	unsigned long long N;
	cin >> N;

	if (N <= LIMIT)
		return -1;

	for (int c = 1; c <= N; c++) {
		for (int b = 1; b <= c; b++) {
			for (int a = 1; a <= b; a++) {
				if ((a * a) + (b * b) == (c * c)) {
					cout << a << SEPARATOR << b << SEPARATOR << c << endl;
				}
			}
		}
	}

	return 0;
}
