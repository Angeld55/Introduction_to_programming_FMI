#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 4;

bool isSortedArray(const int arr[], size_t size) {
    for (size_t i = 0; i < size - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {5, 7, 4, 9};
    cout << isSortedArray(arr, ARRAY_SIZE);
}