#include <iostream>
#include <cstring>
using namespace std;

void mergeArrays(int* first, size_t firstSize, const int* second, size_t secondSize)
{
    int* temp = new int[firstSize + secondSize];
    
    int firstIter = 0, secondIter = 0, tempIter = 0;
    
    while(firstIter < firstSize && secondIter < secondSize)
    {
        if(first[firstIter] <= second[secondIter])
            temp[tempIter++] = first[firstIter++];
        else
            temp[tempIter++] = second[secondIter++];
    }
    //
    while(firstIter < firstSize)
        temp[tempIter++] = first[firstIter++];
    
    while(secondIter < secondSize)
        temp[tempIter++] = second[secondIter++];
    
    for(int i = 0; i < firstSize + secondSize; i++)
        first[i] = temp[i];
    
    delete[] temp;
}
int main()
{
   int first[10] = {1, 3, 5};
   int second[] = {2, 4, 6, 7, 8};
   
   mergeArrays(first, 3, second, 5);
   
   for(int i = 0; i < 8; i++)
        cout << first[i] << " ";
   
}
