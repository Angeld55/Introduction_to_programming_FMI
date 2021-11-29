#include <iostream>
using namespace std;

/*
Задача 1: Да се напише функция, която приема масив и връща дали е палиндром.

Вход: [1 2 3 2 1], Изход: true
*/

bool isPalindrome(const int arr[], unsigned int len)
{
    for(int index = 0; index < len; index++)
    {
        if(arr[index] != arr[len-1-index])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1};
   
    return 0;
}