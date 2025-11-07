#include <iostream>
using namespace std;

constexpr size_t ARRAY1_SIZE = 5;
constexpr size_t ARRAY2_SIZE = 4;

bool existsInArray(const int arr[], size_t size, int value) {
    for (size_t i = 0; i < size; i++) {

        if (arr[i] == value) {
            return true;
        }
    }

    return false;
}

void printUnion(const int arr1[], const int arr2[], size_t size1, size_t size2) {
    for (size_t i = 0; i < size1; i++) {
        cout << arr1[i];

        if (i != size1 - 1) { 
            cout << ", "; 
        }
    }

    bool firstPrinted = (size1 > 0);

    for (size_t i = 0; i < size2; i++) {

        if (!existsInArray(arr1, size1, arr2[i])) {

            if (firstPrinted) {
                cout << ", ";
            }

            cout << arr2[i];
            firstPrinted = true;
        }
    }
    cout << endl;
}

void printIntersection(const int arr1[], const int arr2[], size_t size1, size_t size2) {
    bool firstPrinted = false;

    for (size_t i = 0; i < size1; i++) {

        if (existsInArray(arr2, size2, arr1[i])) {

            if (firstPrinted) {
                cout << ", ";
            }

            cout << arr1[i];
            firstPrinted = true;
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {2, 4, 1, 7, 8};
    int arr2[] = {1, 2, 3, 5};

    printIntersection(arr1, arr2, ARRAY1_SIZE, ARRAY2_SIZE);
    printUnion(arr1, arr2, ARRAY1_SIZE, ARRAY2_SIZE);
}