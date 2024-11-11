#include <iostream>
using namespace std;

void swap(int& first, int& second) {
    int temp = first;
    first = second;
    second = temp;
}

void reverse(int array[], unsigned size) {
    unsigned half = size / 2;
    for (unsigned i = 0; i <= half; i++) {
        swap(array[i], array[size - i - 1]);
    }
}

int main() {

}