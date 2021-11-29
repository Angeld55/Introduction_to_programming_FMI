#include <iostream>
using namespace std;
const int N = 1000;

int countOfInversionsInArray( const int arr[], int n)
{   
     int counter = 0;
     for(int i = 0; i < n - 1; i++)
    {
        int  minElement = arr[i];

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < minElement)
            {
               counter++;                                                                       
            }
        }
    }
    return counter;
   
}



int main()
{
   
    int arr[N];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }

    cout << countOfInversionsInArray(arr,n) << endl;


    return 0;
}