#include <iostream>
using namespace std;
constexpr int arr_size = 32; 


void printArray(int arr[], size_t size) {
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
        if (i + 1 < size) {
            cout << ", ";
        }
    }
}
void swapArray(int arr[], size_t size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
void convertToBinary(int n, int binary[], size_t& size) {
    size = 0;
    if (n == 0) {
        binary[0] = 0;
        size = 1;
        return;
    }
    while (n > 0) {
        binary[size] = n % 2;
        n /= 2;
        size++;
    }
    swapArray(binary, size);
}
bool isPalindrome(int n, int arr [], size_t& size) {
    convertToBinary(n ,arr, size);
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] != arr[size - i - 1]) {
            return false;
        }
    }
    return true;
}


int main() {
    int n = 9;
    int binary[arr_size];
    size_t size;

    cout << isPalindrome(n, binary, size) << endl;
    printArray(binary, size);

}









