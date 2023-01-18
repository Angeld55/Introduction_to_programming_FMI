
#include <iostream>
#include <climits>
using namespace std;


void print(const int* arr, size_t size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


void mySwap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void genPermutations(int* arr, size_t size, unsigned pos)
{
    if(size == pos)
    {
        print(arr, size);
        return;
    }
    for(int i = pos; i < size; i++)
    {
        mySwap(arr[pos], arr[i]);
        genPermutations(arr, size, pos + 1);
        mySwap(arr[pos], arr[i]);
    }
    
}


int main()
{
    int arr[] = {1,2,3,4,5,6};
    genPermutations(arr, 6, 0);

    return 0;
}
