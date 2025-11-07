#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 4;

int sumOfElements(const int arr[], size_t size) {
    int sum = 0;

    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {5, 7, 4, 9};
    cout << sumOfElements(arr, ARRAY_SIZE);
}