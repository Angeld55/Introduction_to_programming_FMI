#include <iostream>

using namespace std;

// Greatest Common Divisor
int gcd(int a, int b) {
	// Eucledian algorithm
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int gcdArray(int nums[], int len) {
	if (len == 1) return nums[0];

	int res = gcd(nums[len - 2], nums[len - 1]);

	for (int i = len - 3; i >= 0; i--)
		res = gcd(nums[i], res);

	return res;
}

int main() {
	int numbers[4] = { 9, 18, 6, 12 };

	cout << gcdArray(numbers, 4) << endl;
}
