#include <iostream>
using namespace std;

int main() {
	int n, res = 0;
	cin >> n;

	if (n < 0)
		n = n * -1;


	while (n != 0) {
		res = res + (n % 10);
		n = n / 10;
	}

	cout << res;
}