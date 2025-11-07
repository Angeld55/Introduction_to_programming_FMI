#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 7;

void printArray(const int arr[], size_t size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void reverseArray(int arr[], size_t size) {
    int lhs = 0;
    int rhs = size - 1;
    while (lhs < rhs) {
        int temp = arr[lhs];
        arr[lhs] = arr[rhs];
        arr[rhs] = arr[lhs];

        lhs++;
        rhs--;
    }

    printArray(arr, size);
}

int main() {
    int arr[] = {1, 7, 4, -5, 12, -3, 6};
    reverseArray(arr, ARRAY_SIZE);
}