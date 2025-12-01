#include <iostream>
using namespace std;
constexpr size_t arr_size = 32;
void generateFibSequence(int n, int arr[], size_t& size) {
	if (n <= 0) {
		size = 0;
		return;
	}

	arr[0] = 0;
	if (n == 1) {
		size = 1;
		return;
	}
	arr[1] = 1;
	for (size_t i = 2; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	size = n;

}
void printArray(int arr[], size_t size) {
	for (size_t i = 0; i < size; i++) {
		cout << arr[i];
		if (i + 1 < size) {
			cout << ", ";
		}
	}
	cout << endl;
}
int main() {

	int n;
	cin >> n;
	int arr[arr_size];
	size_t size;
	generateFibSequence(n, arr, size);
	printArray(arr, size);


}









