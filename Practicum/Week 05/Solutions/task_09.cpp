#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 5;

int fromArrayToNumber(const int arr[]) {
    int number = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        number *= 10;
        number += arr[i];
    }
    return number;
}

void fromNumberToArray(int arr[], int number) {
    size_t arrIter = ARRAY_SIZE - 1;
    while (number != 0) {
        arr[arrIter--] = number % 10;
        number /= 10;
    }
}

void printArr(const int arr[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void addOne(int arr[]) {
    int number = fromArrayToNumber(arr);
    number = number + 1;

    fromNumberToArray(arr, number);

    printArr(arr);
}

int main() {
    int arr[] = {0, 1, 0, 0, 9};
    addOne(arr);
}