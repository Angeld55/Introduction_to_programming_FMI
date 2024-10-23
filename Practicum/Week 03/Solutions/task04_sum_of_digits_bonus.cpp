#include <iostream>
using namespace std;

int main() {
    
	int n, res = 0;
	cin >> n;

	if (n < 0)
		n = n * -1;

	do {
		if (res != 0) {
			n = res;
			res = 0;
		}


		while (n != 0) {
			res += (n % 10);
			n /= 10;
		}

	} while (res > 9);


	cout << res;
}