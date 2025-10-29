#include <iostream>
using namespace std;

int main() {
   	int n = 0;
	cin >> n;

	if (n <= 1) {
		cout << "Not prime";
	}

	else {
		bool isPrime = true;
		double sqrtOfN = sqrt(n);
		for (int i = 2; i <= sqrtOfN; i++) {
			if (n % i == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			cout << "Prime";
		}
		else {
			cout << "Not prime";
		}
	}
}