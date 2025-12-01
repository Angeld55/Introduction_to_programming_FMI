#include <iostream>
using namespace std;

constexpr size_t MIN_SIZE = 0;
constexpr size_t MAX_SIZE = 1024;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortArr(int arr[], size_t size) {
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);   
            }
        }
    }
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int multOfDigits(int n) {
    int mult = 1;
    while (n) {
        mult *= (n % 10);
        n /= 10;
    }
    return mult;
}

bool isInArray(const int arr[], size_t size, int num) {
    for (size_t i = 0; i < size; i++) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

void findMagicNumbers(const int arr[], size_t arrSize, int result[], size_t& resultSize) {
    for (size_t i = 0; i < arrSize; i++) {
        int sum = sumOfDigits(arr[i]);
        int mult = multOfDigits(arr[i]);

        if (sum % mult == 0) {
            if (!isInArray(result, resultSize, arr[i])) {
                result[resultSize++] = arr[i];
            }
        }
    }

    sortArr(result, resultSize);
}

void printArr(const int arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 22, 13, 12, 111, 24, 36};

    int result[MAX_SIZE] {0};
    size_t resultSize = 0;

    findMagicNumbers(arr, 8, result, resultSize);

    printArr(result, resultSize);
}