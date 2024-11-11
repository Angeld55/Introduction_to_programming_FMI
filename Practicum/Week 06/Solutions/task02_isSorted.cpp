#include <iostream>
using namespace std;

bool isSorted(const int array[], unsigned size) {
    if (size <= 1) {
        return true;
    }
    int howSorted;   // -1 - Downgrading, 1 - Upgrading, 0 - Undefined

    if (array[0] == array[1]) {
        howSorted = 0;
    }
    else if (array[0] < array[1]) {
        howSorted = -1;
    }
    else {
        howSorted = 1;
    }
    size = size - 1;

    for (unsigned i = 1; i < size; ++i){

        if (howSorted == -1 && array[i] >= array[i + 1]) {
            continue;
        }
        else if (howSorted == 1 && array[i] <= array[i + 1]) {
            continue;
        }
        else if (howSorted == 0 && array[i] == array[i + 1]) { //The first 3 cases can and should be united in one, but we do it like that so the code can be read easily
            continue;                                         
        }
        else if (howSorted == 0 && array[i] > array[i + 1]) {
            howSorted = -1;
            continue;
        }
        else if (howSorted == 0 && array[i] < array[i + 1]) {
            howSorted = 1;
            continue;
        }
        else {
            return false;
        }
    }
    return true;
}

int main() {
    
}