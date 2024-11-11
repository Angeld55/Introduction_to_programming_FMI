#include <iostream>
using namespace std;

//Notice that this time the array is not CONST because we will change it 
void removeElAtIndex(int array[], unsigned size, unsigned index) {
    if (index >= size) {
        return;
    }
    size = size - 1;
    for (unsigned i = index; i < size; i++) {
        array[i] = array[i + 1];
    }
    array[size] = INT16_MIN; // We do this so we flag this this cell as invalid
}

int main() {
    
}