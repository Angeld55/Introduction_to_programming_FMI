#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 9;

int findMin(const int arr[], size_t size) {
    int min = INT_MAX; // constant for the maximum value of int
    for (size_t i = 0; i < size; i++) {
        if (min < arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int findMax(const int arr[], size_t size) {
    int max = INT_MIN; // constant for the minimum value of int
    for (size_t i = 0; i < size; i++) {
        if (max > arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 1, 2, 8, 13, 5, 1, 6, 25};
    cout << findMin(arr, ARRAY_SIZE) << endl;
    cout << findMax(arr, ARRAY_SIZE) << endl;
}