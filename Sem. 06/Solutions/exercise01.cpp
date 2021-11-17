#include <iostream>

using namespace std;

bool isPalindromeArray(int nums[], int len) {
	for (int i = 0; i < len / 2; i++) {
		if (nums[i] != nums[len - 1 - i])
			return false;
	}
	return true;
}

int main() {
	int numbers[5] = { 1, 2, 3, 2, 1 };

	cout << isPalindromeArray(numbers, 5) << endl;
}
