#include <iostream>
using namespace std;

const unsigned ARR_SIZE = 10;

bool isPalindrome(const int array[], unsigned size) {
    if (size < 2) {
        return true;
    }
    for (unsigned i = 0, j = 0; i <= j; i++, j--) {
        if (array[i] != array[j]) { 
            return false;
        }
    }
    return true;
}

int main() {
    int arr[ARR_SIZE];
    for(int i = 0; i < ARR_SIZE; i++) {
        cin >> arr[i];
    }
    cout << isPalindrome(arr, ARR_SIZE);
}