#include <iostream>
using namespace std;

bool isPositiveNumber(int n) {
    return n > 0;
}

bool isEvenNumber(int n) {
    return n % 2 == 0;
}

int getCountOfPositiveNumbersInArray(const int arr[], size_t size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPositiveNumber(arr[i])) {
            count++;
        }
    }
    return count;
}

int findMinNegativeNumber(const int arr[], size_t size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 && arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int getAverageInArr(const int arr[], size_t size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

void transformNumbers(int arr[], size_t size) {
    int countOfPositiveNumbers = getCountOfPositiveNumbersInArray(arr, size);
    int minNegNum = findMinNegativeNumber(arr, size);
    int average = getAverageInArr(arr, size);

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            arr[i] = average;
            arr[i] *= (-1);
        } else if (isPositiveNumber(arr[i])) {
            if (isEvenNumber(arr[i])) {
                arr[i] *= countOfPositiveNumbers;
            } else {
                if (minNegNum == INT_MAX) {
                    continue;
                } 
                arr[i] += minNegNum;
            }
        } else {
            arr[i] *= (-1);
            arr[i] /= 2;
        }
    }
}

int main() {
    int arr[] = {2, -3, 0, 5, -4, 6};
    transformNumbers(arr, 6);

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
}