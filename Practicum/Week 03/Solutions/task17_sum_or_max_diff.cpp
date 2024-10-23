#include <iostream>
using namespace std;

int main() {

	unsigned int groupsCount = 0;
	cin >> groupsCount;

	int first = 0, second = 0;
	cin >> first >> second;
	int lastSum = first + second;
	unsigned int maxDiff = 0;

	for (size_t i = 1; i < groupsCount; i++) {
		cin >> first >> second;
		int currSum = first + second;

		unsigned int diff = abs(currSum - lastSum);
		if (diff >= maxDiff) {
			maxDiff = diff;
		}

		lastSum = currSum;
	}

	if (maxDiff == 0) {
		cout << "Equal sums: " << lastSum;
	}
	else {
		cout << "Different sums. Max Difference: " << maxDiff;
	}
}