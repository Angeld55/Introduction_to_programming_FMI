#include <iostream>
using namespace std;

const unsigned SIZE = 10;

int missingNumberSlow(const int array[]) {
    bool buff[SIZE];
    for (int i = 0; i < SIZE; i++) {
        buff[i] = false;
    }
    for (int i = 0; i < SIZE; i++) {
        buff[array[i]] = true;
    }
    for (int i = 0; i < SIZE; i++) {
        if (!array[i]) {
            return array[i];
        }
    }
}

int missingNumberSlow(const int array[]) {
    int sum = (SIZE * SIZE / 2);
    int sumArr = 0;
    
    for (int i = 0; i < SIZE; i++) {
        sumArr += array[i];
    }
    return sum - sumArr;
}

int main() {

}