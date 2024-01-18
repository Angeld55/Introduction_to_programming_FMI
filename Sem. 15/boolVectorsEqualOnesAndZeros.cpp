#include <iostream>
using namespace std;

bool areZerosAndOnesEqual(const bool* arr, size_t size)
{
    int zeros = 0, ones = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            zeros++;
        else
            ones++;
    }
    return zeros == ones;
}
void genBoolVectors(bool* arr, size_t size, bool(*filter)(const bool* arr, size_t size), unsigned beginIndex = 0)
{
    if (beginIndex == size)
    {
        if (filter(arr, size))
        {
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;

        }
        return;
    }
    arr[beginIndex] = 0;
    genBoolVectors(arr, size, filter, beginIndex + 1);
    arr[beginIndex] = 1;
    genBoolVectors(arr, size, filter, beginIndex + 1);
}

int main()
{
    const size_t size = 4;
    bool arr[4];
    
    genBoolVectors(arr, size, areZerosAndOnesEqual);

}
