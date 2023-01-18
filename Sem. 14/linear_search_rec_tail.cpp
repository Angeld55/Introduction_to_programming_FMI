#include <iostream>
using namespace std;

bool linearSeach_rec_tail(const int* arr, size_t size, int x, bool isFound)
{
 if (size == 0 || isFound)
     return isFound;

 return linearSeach_rec_tail(arr + 1, size - 1, x, arr[0] == x);
}

bool linearSearchWrapper(const int* arr, size_t size, int x)
{
 return linearSeach_rec_tail(arr, size, x, 0);
}


int main() 
{
    int arr[] = {1,2,3,4,5};
    cout << linearSearchWrapper(arr, 5, 4);
}
