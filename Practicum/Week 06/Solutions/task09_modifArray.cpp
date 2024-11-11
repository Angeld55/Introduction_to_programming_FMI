#include <iostream>
using namespace std;

void increaseByOne(int array[]) {
    
    if (array[4] == 9) {
        array[4] = 0;
        for (int i = 3; i >= 0; i++) {
            if (array[i] == 9) {
                array[i] = 0;
            }
            else {
                ++array[i];
                break;
            }
        }
    }
    else
        array[9]++;
}

int main() {

}