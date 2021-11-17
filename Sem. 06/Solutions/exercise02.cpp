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

// Least Common Multiple
int lcm(int a, int b) {
	// https://en.wikipedia.org/wiki/Least_common_multiple#Using_the_greatest_common_divisor
	return (a * b) / gcd(a, b);
}

int lcmArray(int nums[], int len) {
	if (len == 1) return nums[0];

	int res = lcm(nums[len - 2], nums[len - 1]);

	for (int i = len - 3; i >= 0; i--)
		res = lcm(nums[i], res);

	return res;
}

int main() {
	int numbers[4] = { 9, 18, 6, 12 };

	cout << lcmArray(numbers, 4) << endl;
}
