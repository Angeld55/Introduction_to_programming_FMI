#include <iostream>
using namespace std;
constexpr size_t arr_size = 32;

void printArray(int arr[], size_t size) {
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i];
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
bool isPalindrome(int arr[], size_t size) {
    for (size_t i = 0; i < size/2; i++)
    {
        if (arr[i] != arr[size - i - 1]) {
            return false;
        }
    }
    return true;
}
void swapHalves(int binary[], size_t size) {
    // half1 е с 1 по-дълга, ако size е нечетно
    size_t half1_len = (size + 1) / 2;
    size_t half2_len = size - half1_len;

   
    size_t half2_start_index = half1_len;

   
    int temp[arr_size];

   
    for (size_t i = 0; i < half2_len; i++) {
        temp[i] = binary[half2_start_index + i];
    }
 
    for (size_t i = 0; i < half1_len; i++) {
        temp[half2_len + i] = binary[i];
    }

    for (size_t i = 0; i < size; i++) {
        binary[i] = temp[i];
    }
}

void addOne(int binaryNumber[], size_t& size) {
    int carry = 1;
    for (int i = size - 1; i >= 0; i--) {
        int sum = binaryNumber[i] + carry;
        binaryNumber[i] = sum % 2;
        carry = sum / 2;    
    }
    if (carry == 1) {
        for (int i = size; i > 0; i--) {
            binaryNumber[i] = binaryNumber[i - 1];
        }
        binaryNumber[0] = 1;
        size++;
    }
}

int fromBinaryToDecimal(int binaryNumber[], size_t size) {
    int result = 0;
    int power = 1; 

  
    for (int i = size - 1; i >= 0; i--) {
          result += binaryNumber[i] * power;       
          power *= 2;
    }
    return result;
}

void generateSequence(int n, int result[], size_t& size) {
    size = n;
    int current = n;

    for (int i = 0; i < n; i++) {
        int binary[arr_size];
        size_t binarySize;

        for (size_t j = 0; j < arr_size; j++) {
            binary[j] = 0;
        }

        convertToBinary(current, binary, binarySize);

        swapHalves(binary, binarySize);

        if (isPalindrome(binary, binarySize))
            addOne(binary, binarySize);

        current = fromBinaryToDecimal(binary, binarySize);
        result[i] = current;
    }
}


int main() {

    int n = 5;
    int result[arr_size];
    size_t size;

    generateSequence(n, result, size);
    printArray(result,size);
   


}









