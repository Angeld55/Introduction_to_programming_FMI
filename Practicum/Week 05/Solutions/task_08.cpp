#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 7;

int findCountOfEven(const int arr[], size_t size) {
    int even = 0;
    for (size_t i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }
    }
    return even;
}

size_t findFirstOddOnTheLeft(const int arr[], size_t size, size_t left) {
    while (left < size && arr[left] % 2 == 0) {
        left++;
    }
    return left;
}

size_t findFirstEvenOnTheRight(const int arr[], size_t size, size_t right) {
    while (right > 0 && arr[right] % 2 != 0) {
        right--;
    }
    return right;
}

void printArray(const int arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        cout << arr[i];
        if (i != size - 1) { 
            cout << ", ";
        }
    }
    cout << endl;
}

void refactorArray(int arr[], size_t size) {
    size_t left = 0;          // evens index
    size_t right = size - 1;  // odds index

    while (left < right) {

        left = findFirstOddOnTheLeft(arr, size, left);
        right = findFirstEvenOnTheRight(arr, size, right);

        if (left < right) {
            // swap
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = arr[left];

            left++;
            right--;
        }
    }
    printArray(arr, size);
}

int main() {
    int arr[] = {1, 4, 3, 5, 6, -8, 10};

    refactorArray(arr, ARRAY_SIZE);
}
