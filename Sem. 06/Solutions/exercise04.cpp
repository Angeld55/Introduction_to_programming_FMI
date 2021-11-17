#include <iostream>

using namespace std;

bool isPalindromeArray(int nums[], int len, int start) {
	int end = (len - start) / 2;

	for (int i = start; i < end; i++) {
		if (nums[i] != nums[len - 1 - i])
			return false;
	}

	return true;
}

int isConcatOfTwoPalindromes(int nums[], int len) {
	int border = len / 2 + 1;

	return isPalindromeArray(nums, border, 0) && isPalindromeArray(nums, len, border);
}

int main() {
	int numbers1[9] = { 1, 2, 3, 2, 1, 4, 5, 5, 4 };
	cout << isConcatOfTwoPalindromes(numbers1, 9) << endl;

	int numbers2[5] = { 1, 2, 3, 4, 5 };
	cout << isConcatOfTwoPalindromes(numbers2, 5) << endl;

	int numbers3[5] = { 1, 2, 3, 2, 1 };
	cout << isConcatOfTwoPalindromes(numbers3, 5) << endl;
}
