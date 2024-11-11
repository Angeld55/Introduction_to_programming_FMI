#include <iostream>
using namespace std;

unsigned longestContinuity(const int array[], unsigned size) {
    unsigned maxLen = 0, currentMaxLen=1;
    if (size == 1) {
        return 1;
    }

    for (unsigned i = 1; i < size; i++) {
        if (array[i] == array[i - 1]) {
            currentMaxLen++;
        }
        else {
            if (currentMaxLen > maxLen) {
                maxLen = currentMaxLen;
            }
            currentMaxLen = 0;      
        }
    }
    if (currentMaxLen > maxLen) {
        maxLen = currentMaxLen;
    }
    return maxLen;
}

int main() {

}