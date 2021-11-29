#include <iostream>
using namespace std;


bool isPalindrome(const int arr[], unsigned int length)
{
    for(int i = 0; i < length; i++)
    {
        if (arr[i] != arr[length-1-i])
        {
            return false;
        }
    }
    return true;
}



int main()
{
    int arr[] = {1,2,3,2,1,4,5,5,4};
    int  len = 9;
    for(int j=0; j < len; j++) 
    {
        if(isPalindrome(arr, j) && isPalindrome(arr + j, len - j))
        {
            cout << "True " << j << endl;
            break;
        }
    }

    return 0;
}