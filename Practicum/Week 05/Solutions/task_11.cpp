#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 9;

int findCountOfOccurs(const int arr[], size_t size, int number) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            count++;
        }
    }
    return count;
}

int findMostCommonNumber(const int arr[], size_t size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        int currentCount = findCountOfOccurs(arr, size, arr[i]);
        if (currentCount > max) {
            max = currentCount;
        }
    }
    return max;
}

int main() {
    int arr[] = {6, 3, 5, 7, 6, 5, 3, 6, 5};
    cout << findMostCommonNumber(arr, ARRAY_SIZE) << endl;
}