#include <iostream>
using namespace std;

int sumArr(const int* arr, size_t size)
{
    if(size == 0)
        return 0;
    return arr[0] + sumArr(arr + 1, size - 1);
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5};
   
   cout << sumArr(arr, 5);

    return 0;
}
