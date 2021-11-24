#include <iostream>
#include <cmath>
using namespace std;

//Да се напише функция, която приема две естествени числа a и b и
// отпечава всички числа k в интервала [a,b], такива че k = x^y
// (за някои ест. числа x и y) 
//Вход: 15 30, Изход: 16 25 27 , защото (4^2, 5^2, 3^3)

void Print(int a, int b)
{
    for(int x = 2; x <= b/2; x++)
    {
        for(int y = 2; y < b; y++)
        {
            if(pow(x,y) >= a && pow(x,y) <= b)
            {
                    cout << pow(x,y) << " ";
            }
        }
    }
    
}



int main()
{
    int a, b;
    cin >> a >> b;
    Print(a,b);

    return 0;
}




   