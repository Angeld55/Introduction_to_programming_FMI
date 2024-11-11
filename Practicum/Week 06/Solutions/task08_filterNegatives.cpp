#include <iostream>
using namespace std;

const unsigned ARR_SIZE = 7;

void removeNegative(int array[], unsigned size) {
    for (unsigned i = 0; i < size; i++) {
        if (array[i] < 0) {
            for (unsigned j = i + 1; j < size; j++) {
                if ((j == size - 1) && array[j] < 0) {
                    return;
                }
                else if (array[j] > 0) {
                    swap(array[i], array[j]);
                    break;
                }
            }
        }
    }
}

void printArr(const int arr[], unsigned size) {
    for(unsigned i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[ARR_SIZE];
    for(int i = 0; i < ARR_SIZE; i++) {
        cin >> arr[i];
    }
    removeNegative(arr, ARR_SIZE);
    printArr(arr, ARR_SIZE);
}