#include <iostream>
using namespace std;

constexpr size_t ARRAY1_SIZE = 6;
constexpr size_t ARRAY2_SIZE = 3;

bool isFound(const int arr1[], const int arr2[], size_t size2, int i) {
    for (size_t j = 0; j < size2; j++) {
        if (arr1[i + j] != arr2[j]) {
            return false;
        }
    }
    return true;
}

bool isSubArray(const int arr1[], const int arr2[], size_t size1, size_t size2) {
    if (size2 > size1) {
        return false;
    }

    size_t size = size1 - size2;

    for (size_t i = 0; i <= size; i++) {
        if (isFound(arr1, arr2, size2, i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr1[] = {1, 4, 4, 0, 4, 2};
    int arr2[] = {4, 0, 4};

    cout << isSubArray(arr1, arr2, ARRAY1_SIZE, ARRAY2_SIZE) << endl;
}