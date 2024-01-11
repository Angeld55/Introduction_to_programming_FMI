#include <iostream>
#include <climits>
using namespace std;

bool linearSearch(const int* arr, size_t size, int searched)
{
    if(size == 0)
        return false;
    return arr[0] == searched || linearSearch(arr + 1, size - 1, searched);
}

int main()
{
   int arr[] = {1, 2, 6, 3, 1};
   
   cout << linearSearch(arr, 5, 3);

    return 0;
}
