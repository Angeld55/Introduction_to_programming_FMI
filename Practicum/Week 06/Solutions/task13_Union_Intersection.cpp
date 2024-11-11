#include <iostream>
using namespace std;

const unsigned SIZE_1 = 5;
const unsigned SIZE_2 = 4;

void unionArrays(int arr1[], int size1, int arr2[], int size2, int result[], int& resultSize) {
    resultSize = 0;

    for (int i = 0; i < size1; i++) {
        result[resultSize++] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        bool found = false;
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result[resultSize++] = arr2[i];
        }
    }
}

void intersectionArrays(int arr1[], int size1, int arr2[], int size2, int result[], int& resultSize) {
    resultSize = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                bool found = false;
                for (int k = 0; k < resultSize; k++) {
                    if (result[k] == arr1[i]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    result[resultSize++] = arr1[i];
                }
            }
        }
    }
}

void printArray(const int arr[], unsigned size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void inputArray(int arr[], unsigned size) {
    for(unsigned i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int main() {
    int arr1[SIZE_1];
    inputArray(arr1, SIZE_1);

    int arr2[SIZE_2];
    inputArray(arr2, SIZE_2);

    int unionResult[10];
    int intersectionResult[5];

    int unionSize, intersectionSize;

    unionArrays(arr1, 5, arr2, 4, unionResult, unionSize);
    intersectionArrays(arr1, 5, arr2, 4, intersectionResult, intersectionSize);

    cout << "Union: ";
    printArray(unionResult, unionSize);
    cout << endl;

    cout << "Intersection: ";
    printArray(intersectionResult, intersectionSize);
    cout << endl;
}
