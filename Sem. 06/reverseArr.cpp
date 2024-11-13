

#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void reverse(int arr[], size_t size)
{
    for(int i = 0; i < size / 2; i++)
        swap(arr[i], arr[size - i - 1]);
}
int main()
{
    constexpr size_t size = 4;
    int arr[size] = {1, 2, 3, 4};
    reverse(arr, size);
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
