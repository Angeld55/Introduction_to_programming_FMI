#include <iostream>
using namespace std;

const unsigned ARR_SIZE = 4;

double average(const int array[], unsigned size) {
    double sum = 0;
    for (unsigned i = 0; i < size; i++) {
        sum += array[i];
    }
    return (sum / size);
}

int main() {
    int arr[ARR_SIZE] = {5, 7, 4, 9};
    cout << average(arr, ARR_SIZE);
}