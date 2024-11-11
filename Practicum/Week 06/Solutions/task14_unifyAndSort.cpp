#include <iostream>
using namespace std;

const unsigned SIZE = 5;

void inputArray(int arr[], unsigned size) {
    for (unsigned i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArr(const int arr[], unsigned size) {
    for (unsigned i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void mergeArrays(const int arr1[], const int arr2[], unsigned size1, unsigned size2, int result[], unsigned& resultSize) {
    unsigned iter1 = 0;
    unsigned iter2 = 0;
    unsigned resIter = 0;
    resultSize = size1 + size2;

    while (iter1 < size1 && iter2 < size2) {

        if (arr1[iter1] <= arr2[iter2]) {

            result[resIter] = arr1[iter1];

            iter1++;
            resIter++;

            continue;
        }
        result[resIter] = arr2[iter2];

        iter2++;
        resIter++;
    }

    //if there are more elements in arr1 
    while (iter1 < size1) {
        result[resIter] = arr1[iter1];
        resIter++;
        iter1++;
    }

    //if there are more elements in arr2
    while (iter2 < size2) {
        result[resIter] = arr2[iter2];
        resIter++;
        iter2++;
    }
}

int main() {
    int arr1[SIZE];
    inputArray(arr1, SIZE);

    int arr2[SIZE];
    inputArray(arr2, SIZE);

    int result[SIZE + SIZE]{ 0 };
    unsigned resultSize = 0;

    mergeArrays(arr1, arr2, SIZE, SIZE, result, resultSize);
    printArr(result, resultSize);
}