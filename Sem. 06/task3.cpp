#include <iostream>
using namespace std;

int GCD (int a, int b)
{
    int  m = (a < b) ? a : b;
    while(true)
    {
        if (a % m == 0 && b % m == 0)
        {
            return m;
        }
        m--;
    }
}

int getGCDArray (const int arr[], unsigned int len)
{
    int gcd = GCD (arr[0], arr[1]);
    for(int i = 2; i < len; i++)
    {
        gcd = GCD(gcd, arr[i]); 
    }
    return gcd;
}




int main()
{

    int arr[] = {9, 18, 6, 12};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "The GCD of array elements is: " << getGCDArray(arr, len);

    return 0;
}