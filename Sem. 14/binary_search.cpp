#include <iostream>
#include <climits>
using namespace std;

bool binarySearch(const int* arr, size_t size, int searched)
{
    if(size == 0)
        return false;
        
    int mid = size / 2;
    if(arr[mid] == searched)
        return true;
    if(arr[mid] > searched)
        return binarySearch(arr, mid, searched);
    else
        return binarySearch(arr + mid + 1, size - mid - 1, searched);
}

int main()
{
   int arr[] = {1,5,7,12,14,20};
   
   cout << binarySearch(arr, 6, 5);

    return 0;
}
