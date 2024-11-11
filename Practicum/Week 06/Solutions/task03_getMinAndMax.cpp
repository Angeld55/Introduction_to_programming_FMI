#include <iostream>
using namespace std;

const unsigned ARR_SIZE = 5;

void minAndMax(const int array[], unsigned size, int& min, int& max) {
    min = INT_MIN; // The lowest value of Integer
    max = INT_MAX; // The highest value of Integer

    for (unsigned i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        else if (array[i] > max) {
            max = array[i];
        }
    }
}

int main() {
    int arr[ARR_SIZE];
    for(int i = 0; i < ARR_SIZE; i++) {
        cin >> arr[i];
    }
    int min, max;
    minAndMax(arr, ARR_SIZE, min, max);
    cout << min << ", " << max;
}
