#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 9;

bool hasDigit(int number, size_t digit) {
    while (number != 0) {
        if (number % 10 == digit) {
            return true;
        }
        number /= 10;
    }
    return false;
}

bool isValidSize(size_t size) {
    return size <= ARRAY_SIZE;
}

void printArr(const int arr[], size_t size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void refactorArray(int arr[], size_t size) {
    if (!isValidSize(size)) {
        return;
    }

    for (int i = 0; i < size; i++) {
        if (!hasDigit(arr[i], i)) {
            arr[i] = 0;
        }
    }

    printArr(arr, size);
}

int main() {
    int arr[] = {45, 62, 23, 47, 47, 65, 100};
    refactorArray(arr, 7);
}