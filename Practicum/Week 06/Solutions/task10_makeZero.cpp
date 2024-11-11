#include <iostream>
using namespace std;

const unsigned SIZE = 10;

bool isDigitInNummber(int number, int digit) {
    while (number != 0) {
        if (number % 10 == digit) {
            return true;
        }
        number = number / 10;
    }
}

void filterArray(int array[], unsigned size) {
    for (unsigned i = 0; i < 10 && i < size; i++) {
        if (isDigitInNummber(array[i], i)) {
            array[i] = 0;
        }
    }
}

void inputArr(int array[], unsigned size) {
    for(unsigned i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printArr(const int array[], unsigned size) {
    for(unsigned i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }
}

int main() {
    int arr[SIZE];
    inputArr(arr, SIZE);
    filterArray(arr, SIZE);
    printArr(arr, SIZE);
}