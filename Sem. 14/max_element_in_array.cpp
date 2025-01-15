#include <iostream>
#include <climits>
using namespace std;

int myMax(int a, int b)
{
    return a > b ? a : b;
}

int getMaxInArr(const int* arr, size_t size)
{
    if(size == 0)
        return INT_MIN;
    return myMax(arr[0],  getMaxInArr(arr + 1, size - 1));
}

int getMaxInArr2(const int* arr, size_t size)
{
    if(size == 0)
        return INT_MIN;
    if(size == 1)
        return arr[0];
        
    int mid = size/ 2;
    return myMax(getMaxInArr2(arr, mid), getMaxInArr2(arr + mid, size - mid));
}


int main()
{
   int arr[] = {1, 2, 6, 3, 1};
   
   cout << getMaxInArr2(arr, 5);

    return 0;
}
