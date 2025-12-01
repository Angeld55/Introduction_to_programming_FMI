#include <iostream>
using namespace std;
constexpr size_t arr_size = 32;

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
int XOR(int a, int b) {
    if (a == b)
        return 0;
    else
        return 1;
}
void applyXOR(int arr1[],size_t size1, int arr2[],size_t size2, int result[], size_t& size) {
    if (size1 != size2) {
        size = 0;
        return;
    }
       
    for (size_t i = 0; i < size1; i++)
    {
        result[i] = XOR(arr1[i], arr2[i]);
    }
    size = size1;

}
int main() {

	
    int a = 5;
    int b = 9;

    int binaryA[arr_size], binaryB[arr_size], binaryResult[arr_size];
    size_t sizeA, sizeB, sizeResult;

    convertToBinary(a, binaryA, sizeA);
    convertToBinary(b, binaryB, sizeB);

    applyXOR(binaryA, sizeA, binaryB, sizeB, binaryResult, sizeResult);

    cout << "XOR Result: "; printArray(binaryResult, sizeResult);

    return 0;

}









