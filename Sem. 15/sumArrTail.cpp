#include <iostream>
using namespace std;

int sumArrTail(const int* arr, size_t size, int sum = 0)
{
    if (size == 0)
        return sum;
    return sumArrTail(arr + 1, size - 1, sum + arr[0]);
}

int main()
{
    const size_t SIZE = 4;
    int arr[SIZE]{1, 2, 3, 4};
    cout << sumArrTail(arr, SIZE);
}
