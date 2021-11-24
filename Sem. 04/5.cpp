#include <iostream>
using namespace std;

//Да се напише функция, която приема естествено число n 
//и отпечатва всички двойки <a,b>, такива че a и b са прости и a + b = n

bool isPrime(int n)
{
    if(n == 1)
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

void Pair(int n)
{
    for(int a = 1; a <= n; a++)
    {
        for(int b = 1; b <= n; b++)   
        {
            if(isPrime(a) && isPrime(b) && a+b == n){

                cout << '(' << a << ',' << b << ')' << " ";
            }
        }                                      
    }

}



int main()
{
    int n;
    cin >> n;
    Pair(n);

    return 0;
}