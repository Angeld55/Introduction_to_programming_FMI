#include <iostream>
using namespace std;

int main() {
   	int a = 0, b = 0;
	cin >> a >> b;

	if (b < a) {
		int temp = a;
		a = b;
		b = temp;
	}

	for (int i = a; i < b; i++) {
		bool isPrime = true;
		double sqrtOfI = sqrt(i);
		for (int j = 2; j <= sqrtOfI; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}

		}
		if (isPrime) {
			cout << i << " ";
		}
	}
}