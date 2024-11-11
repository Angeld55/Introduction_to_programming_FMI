#include <iostream>
using namespace std;

unsigned gcd(int n, int k) {
	if (n < k) {
		int temp = n;
		n = k;
		k = temp;
	}
	while (k != 0) {
		int mod = n % k;
		n = k;
		k = mod;
	}
	return n;
}

int main() {
    int n, k;
    cin >> n >> k;
    int result = gcd(n, k);
    cout << result;
}