#include <iostream>
using namespace std;





int TheMinRemovedNumber (const int arr[], unsigned int n)
{
    int FirstNumber;
    FirstNumber = arr[0];

    for ( int i = 0; i < n; i++)
    {
        FirstNumber += i;
        if (FirstNumber != arr[i])
        {
            cout << "This is a removed number from the array" << endl;
            return FirstNumber;
        }
    }
    return 1;
}



int main()
{
    int arr[] = {5,6,7,9,10,12,13};
   cout <<  TheMinRemovedNumber(arr, 7);
    
    return 0;
}