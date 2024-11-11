#include <iostream>
using namespace std;

bool isArrSubarray(const int array[], unsigned size1, const int subArray[], unsigned size2) {
    unsigned indexToLook = 0;
    for (unsigned i = 0; i < size1; ++i) {
        if (indexToLook == size2) {
            return true;
        }
        if (array[i] == subArray[indexToLook]) {
            indexToLook++;
        }
        else {
            indexToLook = 0;
        }
    }

    return indexToLook == size2;
}

int main() {

}