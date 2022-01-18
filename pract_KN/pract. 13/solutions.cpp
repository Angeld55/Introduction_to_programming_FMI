#include <iostream>
#include<fstream>

bool isEven(int n) {
	return (n % 2) == 0;
}

void plusFive(int& n) {
	n += 5;
}
// task one
void filter(int* arr, int length, bool (*pred)(int)) {
	for (int i = 0; i < length; i++) {
		if (!pred(arr[i]))
			arr[i] = -1;
	}
}

// task two
void map(int* arr, int length, void (*func)(int&)) {
	for (int i = 0; i < length; i++) {
		func(arr[i]);
	}
}

// task three:
size_t replaceEveryFiveWithEight(size_t number) {
	if (number == 0)
		return 0;

	int lastDigit = number % 10;
	if (lastDigit == 5)
		return 10 * replaceEveryFiveWithEight(number / 10) + 8;

	return 10 * replaceEveryFiveWithEight(number / 10) + lastDigit;
	// 12 * 10 + 8
}

// task four
int binarySearch(const int arr[], int start, int end, int searchedElement) {
	if (start > end)
		return -1;

	int mid = start + (end - start) / 2;
	if (arr[mid] == searchedElement)
		return mid;
	else if (arr[mid] > searchedElement)
		return binarySearch(arr, start, mid - 1, searchedElement);
	else
		return binarySearch(arr, mid + 1, end, searchedElement);
}

// task five
bool isValidIndex(bool** grid, int start, int end, int w, int h) {
	return start >= 0 && end >= 0 && start < h&& end < w && (grid[start][end] == 0);
}

bool isThereAPath(bool** grid, int startX, int startY, int endX, int endY, const int w, const int h) {
	if (startX == endX && startY == endY)
		return true;

	if (!isValidIndex(grid, startX, startY, w, h))
		return false;

	grid[startX][startY] = true;

	return isThereAPath(grid, startX + 1, startY, endX, endY, w, h) ||
		isThereAPath(grid, startX - 1, startY, endX, endY, w, h) ||
		isThereAPath(grid, startX, startY + 1, endX, endY, w, h) ||
		isThereAPath(grid, startX, startY - 1, endX, endY, w, h);
}

// task six
bool isValidIndex(int** grid, int sX, int sY, int w, int h) {
	return sX >= 0 && sY >= 0 && sX < h && sY < w;
}

int biggestPath(int** grid, int startX, int startY, int width, int heigth) {
	if (!isValidIndex(grid, startX, startY, width, heigth))
		return 0;

	return grid[startX][startY] + std::max(biggestPath(grid, startX + 1, startY, width, heigth), biggestPath(grid, startX, startY + 1, width, heigth));
}

int main() {
	int arr[12] = { 1, 5, 8, 12, 16, 22, 34, 45,69, 77,101, 420 };
	std::cout << binarySearch(arr, 0, 11, 8) << std::endl;
	std::cout << binarySearch(arr, 0, 11, 9);
}
