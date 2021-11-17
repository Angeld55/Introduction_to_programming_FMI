#include <iostream>

using namespace std;

int inversionsCount(int nums[], int len) {
	int count = 0;

	for (int i = 0; i <= len - 2; i++) {
		for (int j = i + 1; j <= len - 1; j++) {
			if (nums[i] > nums[j])
				count++;
		}
	}

	return count;
}

int main() {
	const int MAX_N = 1000;

	int n;
	cin >> n;

	int nums[MAX_N] = { 0 };
	for (int i = 0; i < n; i++)
		cin >> nums[i];

	cout << inversionsCount(nums, n) << endl;
}
