#include <iostream>
using namespace std;

const unsigned SIZE = 10;

void inputArr(int arr[], unsigned size) {
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int mostCommonNumber(const int array[], unsigned size) {
    int currentMostCommonNumber, currentCount = 0;
    
    for (int i = 0; i < size; i++) {
        int currentOcurances = 1;
        for (int j = 0; j < size; j++) {
            if (array[j] == array[i]) {
                currentOcurances++;
            }
        }

        if (currentOcurances > currentCount) {
            currentMostCommonNumber = array[i];
            currentCount = currentOcurances;
        }
    }

    return currentMostCommonNumber;
}

int main() {
    int arr[SIZE];
    inputArr(arr, SIZE);
    int mostCommonNum = mostCommonNumber(arr, SIZE);
    cout << mostCommonNum;
}