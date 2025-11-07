#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 20;

bool isValidInput(const int arr[], size_t size) {
    if (size != ARRAY_SIZE) {
        return false;
    }
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 || arr[i] > 20) {
            return false;
        }
    }

    return true;
}

int findCountOfOccurs(const int arr[], size_t size, int current) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == current) {
            count++;
        }
    }
    return count;
}

int findMissing(const int arr[], size_t size) {
    for (int i = 0; i < size; i++) {
        int currentCount = findCountOfOccurs(arr, size, i);
        if (currentCount == 0) {
            return i;
        }
    }
    return -1;
}

int main() {

}