#include <iostream>
using namespace std;

int getCountOfOccurs(const int arr[], size_t arrSize, int num) {
    int result = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == num) {
            result++;
        }
    }
    return result;
}

int findMissing(const int arr1[], size_t size1, const int arr2[], size_t size2) {
    for (int i = 0; i < size1; i++) {
        if (getCountOfOccurs(arr2, size2, arr1[i]) == 0) {
            return arr1[i];
        }
    }
    return -1;
}

int main() {
    int arr1[] = {3, 1, 5, 7, 9};
    int arr2[] = {9, 7, 5, 3};
    cout << findMissing(arr1, 5, arr2, 4);
}