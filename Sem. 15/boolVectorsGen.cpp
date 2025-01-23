#include <iostream>
using namespace std;

void genBoolVectors(bool* arr, size_t size, unsigned beginIndex = 0)
{
    if (beginIndex == size)
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }
    arr[beginIndex] = 0;
    genBoolVectors(arr, size, beginIndex + 1);
    arr[beginIndex] = 1;
    genBoolVectors(arr, size, beginIndex + 1);
}

int main()
{
    const size_t SIZE = 4;
    bool arr[SIZE];
    genBoolVectors(arr, SIZE);
    
}
