#include <iostream>
using namespace std;

//: Да се напише функция, която приема три естествени числа a и b и k отпечатва 
//  всички числа в интервата [a...b], които имат точно k различни прости делители.
//  Вход: 19 32 3, Изход: 20 30 Вход: 19 32 1, Изход: 19 23 29 31


bool isPrime(int n)
{
    if( n == 1)
    {
        return true;
    }
    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrimeDevisors(int n)
{
    int result = 0;
    for( int i = 2; i <= n; ++i)
    {
        if( n% i == 0 && isPrime(i))
        {
          result++;
        }
    }
    return result;
}

void Divider(int a, int b, int k)
{
    int result = 0;
    for(int i = a; i <= b; i++)
    {
         if(countPrimeDevisors(i) == k)     
         {
             cout << i << " ";
         }                                
    }
}


int main()
{
    int a,b,k;
    cin >> a >> b >> k;
    Divider(a,b,k);

    return 0;
}