#include <iostream>
using namespace std;

/*
Задача 2. Да се напише функция, която приема масив и връща най-малкото общо кратно на числата в масива.

Вход: [9 18 6 12], Изход: 36
*/

int getLCM(int a, int b)
{
    int m;
    m = (a > b) ? a : b;

    while(true)
    {
        if (m % a == 0 && m % b == 0)
        {
            return m;
        }
        m++;
    }
}
 

int getLCMArray (const int arr[], unsigned int len)
{
    int lcm = getLCM (arr[0], arr[1]);
    for (int i = 2; i < len; i++)
    {
        lcm = getLCM(lcm,arr[i]);
    }
    return lcm;
}


int main()
{
    int arr[] = {9, 18, 6, 12};
    int len =  sizeof(arr) / sizeof (arr[0]);
    cout << "LCM of array elements is: "  << getLCMArray(arr, len);                                                                                                                                   

    return 0;
}