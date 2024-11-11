#include <iostream>
using namespace std;

int power(int base, unsigned int exponent) {
	int result = 1;

	if (!base)
		return base;

	if (!exponent)
		return exponent;

	for (unsigned i = 0; i < exponent; i++)
		result = result * base;

	return result;
}

int main() {
    int num, k;
    cin >> num >> k;
    cout << power(num, k);
}