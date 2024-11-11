#include <iostream>
using namespace std;

unsigned concatDigitAtBack(unsigned n, unsigned digit) {
	return n * 10 + digit;
}

unsigned countDigitOccurences(unsigned n, unsigned digit) {
	if (digit == 0 && n == 0)
		return 1;

	unsigned count = 0;
	while (n != 0)
	{
		int lastDigit = n % 10;
		if (lastDigit == digit)
			count++;
		n /= 10;
	}
	return count;
}

unsigned concatCountTimesDigit(unsigned a, unsigned digit, unsigned count) {
	unsigned result = a;
	for (int i = 0; i < count; i++)
		result = concatDigitAtBack(result, digit);
	return result;
}

unsigned sortDigits(unsigned n) {
	unsigned result = 0;
	for (int i = 9; i >= 0; i--)
	{
		unsigned count = countDigitOccurences(n, i);
		result = concatCountTimesDigit(result, i, count);
	}
	return result;
}

int main() {
    unsigned input;
    cin >> input;
    unsigned res = sortDigits(input);
    cout << res;
}