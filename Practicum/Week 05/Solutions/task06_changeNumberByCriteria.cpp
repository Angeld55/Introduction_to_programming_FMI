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

int extractDigitsInRange(int n, int i, int j) {
    int absN = abs(n);

    int numDigits = 0;
    int temp = absN;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    if (i < 0 || j >= numDigits || i > j) {
        cout << "Invalid indexes!" << endl;
        return 0;
    }

    int divisor = pow(10, numDigits - j - 1);
    absN /= divisor;

    int result = absN % static_cast<int>(power(10, j - i + 1));

    return (n < 0) ? -result : result;
}

int main() {
    int n, i, j;
    cin >> n;
    cin >> i;
    cin >> j;

    int result = extractDigitsInRange(n, i, j);
    cout << result << endl;

}
