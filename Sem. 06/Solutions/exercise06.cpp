#include <iostream>

using namespace std;

int smallestRemovedNumber(int nums[], int len) { // Works only for non-negative numbers
	int pivot = len / 2, diff = 0, smallest = -1, biggest = 0;

	while (pivot > 0) {
		// Pivot going to the left
		if (nums[pivot - 1] + 1 != nums[pivot])
			smallest = nums[pivot] - 1;

		// Pivot going to the right
		if (nums[pivot + diff] + 1 != nums[pivot + diff + 1])
			biggest = nums[pivot + diff] + 1;

		diff += 2 + (pivot % 2);
		pivot /= 2;
	}

	return (smallest == -1) ? biggest : smallest;
}

int biggestRemovedNumber(int nums[], int len) { // Works only for non-negative numbers
	int pivot = len / 2, diff = 0, smallest = 0, biggest = -1;

	while (pivot > 0) {
		// Pivot going to the left
		if (nums[pivot - 1] + 1 != nums[pivot])
			smallest = nums[pivot] - 1;

		// Pivot going to the right
		if (nums[pivot + diff] + 1 != nums[pivot + diff + 1])
			biggest = nums[pivot + diff] + 1;

		diff += 2 + (pivot % 2);
		pivot /= 2;
	}

	return (biggest == -1) ? smallest : biggest;
}

int main() {
	int numbers1[7] = { 5, 6, 7, 9, 10, 12, 13 };
	cout << smallestRemovedNumber(numbers1, 7) << " " << biggestRemovedNumber(numbers1, 7) << endl;

	int numbers2[5] = { 10, 12, 13, 14, 16 };
	cout << smallestRemovedNumber(numbers2, 5) << " " << biggestRemovedNumber(numbers2, 5) << endl;
}
