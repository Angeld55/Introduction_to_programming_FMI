#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 8;

bool isPalindrome(const int arr[], size_t size) {
    int lhs = 0;
    int rhs = size - 1;

    while (lhs < rhs) {
        if (arr[lhs] != arr[rhs]) {
            return false;
        }
        lhs++;
        rhs--;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 3, 2, 1};
    cout << isPalindrome(arr, ARRAY_SIZE) << endl;
}