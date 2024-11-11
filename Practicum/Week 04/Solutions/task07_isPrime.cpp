#include <iostream>
using namespace std;

bool isPrime(int num) {
	if (num <= 1) {
		return false;
    }
	bool isPrime = true;
	double rootOfNum = sqrt(num);
	for (unsigned i = 0; i <= rootOfNum; i++) {
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

int main() {
    int n = 0;
    cin >> n;
    bool result = isPrime(n);
    cout << result;
}