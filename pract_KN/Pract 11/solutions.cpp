#include<iostream>

//helpers:
void initMatrix(int** matrix, int n, int m) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			matrix[i][j] = (i + j) * (i + j + 1) / 2 + j;
}

void initArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
		arr[i] = rand() % 100;
}

void printArray(const int* arr, int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
}

void printMatrix(int** matrix, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			std::cout << matrix[i][j] << " ";
		std::cout << std::endl;
	}
}

void freeMatrix(int** arr, int n, int m) {
	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;
}

void freeArray(int* arr) {
	delete[] arr;
}

//Task 1
void deleteElementAtIndex(int* arr, int index, int& length) {
	for (int i = index; i < length - 1; i++)
		arr[i] = arr[i + 1];
	arr[length - 1] = -1;
	--length;
}

//Task 2:
int findSum(int* row, int length) {
	int res = 0;
	for (int i = 0; i < length; i++)
		res += row[i];
	return res;
}

int rowWithBiggestSum(int** arr, int n, int m) {
	int biggestSum = findSum(arr[0], m);
	int row = 0;
	for (int i = 1; i < n; i++) {
		int currentSum = findSum(arr[i], m);
		if (biggestSum < currentSum) {
			biggestSum = currentSum;
			row = i;
		}
	}
	return row;
}

//Task 3:
void removeRow(int** arr, int k, int& n) {
	delete[] arr[k];
	for (int i = k; i < n - 1; i++)
		arr[i] = arr[i + 1];
	--n;
}

//Task 4:
void cycle(int* arr, int n, int k) {
	int* copyArr = new int[n];
	for (int i = 0; i < n; i++)
		copyArr[i] = arr[(i + k) % n];
	memcpy(arr, copyArr, n * sizeof(int));
	delete[] copyArr;
}

//Task 5:
void removeElements(int* arr, int& length) {
	for (int i = 1; i < length - 1;) {
		if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
			deleteElementAtIndex(arr, i, length);
			i--;
			if(i == 0) { //We don't want to deal with i == 0 case. Its always true in our solution.
				i = 1;
			}
		}
		else {
			++i;
		}
	}
}

void testsOnTaskOne() {
	int length = 0;
	std::cin >> length;
	int* arr = new int[length];
	initArray(arr, length);
	printArray(arr, length);
	std::cout << std::endl;
	deleteElementAtIndex(arr, 5, length);
	printArray(arr, length);
	freeArray(arr);
}

void testsOnTaskTwo() {
	int n = 0;
	int m = 0;
	std::cin >> n >> m;
	//Create dynamic array:
	int** darray = new int* [n];
	for (int i = 0; i < n; i++)
		darray[i] = new int[m];

	//Initialize:
	initMatrix(darray, n, m);

	int biggestSum = rowWithBiggestSum(darray, n, m);

	printArray(darray[biggestSum], m);

	freeMatrix(darray, n, m);
}

void testsOnTaskThree() {
	int n = 0;
	int m = 0;
	std::cin >> n >> m;
	//Create dynamic array:
	int** darray = new int* [n];

	for (int i = 0; i < n; i++)
		darray[i] = new int[m];

	//Initialize:
	initMatrix(darray, n, m);

	printMatrix(darray, n, m);
	removeRow(darray, 0, n);
	removeRow(darray, 3, n);
	std::cout << std::endl;
	printMatrix(darray, n, m);

	freeMatrix(darray, n, m);
}

void testsOnTaskFour() {
	int length = 0;
	std::cin >> length;
	int* arr = new int[length];
	initArray(arr, length);
	printArray(arr, length);
	std::cout << std::endl;
	cycle(arr, length, 1);
	printArray(arr, length);
	freeArray(arr);
}

void testsOnTaskFive() {
	int length = 0;
	std::cin >> length;
	int* arr = new int[length];
	initArray(arr, length);
	printArray(arr, length);
	std::cout << std::endl;
	removeElements(arr, length);
	printArray(arr, length);
	freeArray(arr);
}

int main() {
	//testsOnTaskOne();
	//testsOnTaskTwo();
	//testsOnTaskThree();
	//testsOnTaskFour();
	//testsOnTaskFive();
}
