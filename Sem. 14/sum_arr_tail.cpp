#include <iostream>
using namespace std;

int sum(const int* arr, size_t size)
{
 int sum = 0;
 for (int i = 0; i < size; i++)
 sum += arr[i];
 return sum;
}

int sum_rec(const int* arr, size_t size)
{
 if (size == 0)
 return 0;
 return arr[0] + sum_rec(arr + 1, size - 1);
}

int sum_rec_tail(const int* arr, size_t size, int result)
{
 if (size == 0)
 return result;
 return sum_rec_tail(arr + 1, size - 1, result + arr[0]);
}

int sum_rec_wrapper(const int* arr, size_t size)
{
 return sum_rec_tail(arr, size, 0);
}

int main() 
{
    int arr[] = {1,2,3,4,5};
    cout << sum_rec_wrapper(arr, 5);
}
