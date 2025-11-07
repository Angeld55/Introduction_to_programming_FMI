#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 7;
constexpr int POSITION = 4;

bool isValidPosition(size_t size, int position) {
    return (position >= 0 && position < size);
}

void printArray(const int arr[], size_t size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void removeFromArray(int arr[], size_t size, int position) {
    if (!isValidPosition(size, position)) {
        return;
    }

    for (size_t i = position; i < size - 1; i++) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = arr[i];
    }

    arr[size - 1] = -1;

    printArray(arr, size);
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    removeFromArray(arr, ARRAY_SIZE, POSITION);
}