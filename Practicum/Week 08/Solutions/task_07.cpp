#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], size_t n) {
    if (n == 0) {
        return -1;
    }

    size_t left = 0;
    size_t right = n - 1;
    int base = arr[0];

    while (left <= right) {
        int mid = (left / 2) + (right / 2); // (left + right - left) / 2
        if (arr[mid] == base + mid) {
            // до mid всичко е наред, търсим вдясно
            left = mid + 1;
        } 
        else {
            // намерихме нарушение -> търсим по-наляво дали има по-ранно нарушение
            right = mid - 1;
        }
    }
    // left е първият индекс с нарушение (или left == n ако няма нарушение)
    return base + left;
}

int main() {
    int arr[] = {5, 6, 7, 9, 10, 12, 13};
    
    cout << findSmallestMissing(arr, 7);
}