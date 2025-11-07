#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 4;

// We use the same function for sum from task_01
int sumOfElements(const int arr[], size_t size) {
    int sum = 0;

    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

double getAverageValue(const int arr[], size_t size) {
    int sum = sumOfElements(arr, size);

    return (sum * 0.1) / size;
}

int main() {
    int arr[] = {5, 7, 4, 9};
    cout << getAverageValue(arr, ARRAY_SIZE);
}