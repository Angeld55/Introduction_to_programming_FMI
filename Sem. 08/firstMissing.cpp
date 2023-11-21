#include <iostream>
using namespace std;

int getMissing(const int arr[], size_t size)
{
    int result = 0;
    for(unsigned i = 0; i < size; i++)
        result ^= arr[i];
    return result;
}
int main()
{   
    constexpr size_t size = 7;
    int arr[] = {5, 1, 5, 6, 1, 7, 6};
    
    cout << getMissing(arr, 7);

    return 0;
}
