
#include <iostream>
#include <climits>
using namespace std;


void print(const int* arr, size_t size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void printArrSubset(const bool* boolVector, size_t size, const int* arr)
{
    cout << "{";
    for(int i = 0; i < size; i++)
    {
        if(boolVector[i] == 1)
            cout << arr[i] << " ";
    }
        cout << "}";
    cout << endl;
}
void genAllSubsets(bool* boolVector, size_t size, unsigned currentPos, const int* arr)
{
    
    if(currentPos == size)
    {
        printArrSubset(boolVector, size, arr);
        return;
    }
    boolVector[currentPos] = 0;
    genAllSubsets(boolVector, size, currentPos + 1, arr);
    boolVector[currentPos] = 1;
    genAllSubsets(boolVector, size, currentPos + 1, arr);
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    bool boolVector[6];
    
    genAllSubsets(boolVector, 6, 0, arr);

    return 0;
}
