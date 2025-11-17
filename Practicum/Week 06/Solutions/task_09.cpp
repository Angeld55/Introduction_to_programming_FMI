#include <iostream>
using namespace std;

void reversePart(int arr[], size_t start, size_t end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

void rotateArray(int arr[], size_t arrSize, int n) {
    if (arrSize == 0 || n <= 0) {
        return;
    }

    n %= arrSize;
    if (n == 0) {
        return;
    }

    reversePart(arr, 0, arrSize - 1); // Обръщаме целия масив
    reversePart(arr, 0, n - 1); // Обръщаме първите n - елемента
    reversePart(arr, n, arrSize - 1); // Обръщаме останалите arrSize - n елемента
    
}

int main() {

}