#include <iostream>
using namespace std;

const unsigned SIZE = 20;

void occurances(const int array[]) {
    int occurances[SIZE];

    for (int i = 0; i < SIZE; i++) {
        occurances[i] = 0;
    }
    for (int i = 0; i < SIZE; i++) {
        occurances[array[i]]++;
    }
    for (int i = 0; i < SIZE; i++) {
        cout << i << " - " << occurances[i];
    }
}

int main() {
    int array[SIZE] = {1,0,3,2,4,5,2,19,5,2,7,0,2,4,5,6,4,2,6,7};
    occurances(array);
}