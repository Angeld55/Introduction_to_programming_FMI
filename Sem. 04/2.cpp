#include <iostream>
#include <cmath>
using namespace std;

//Напишете функция, която приема 4 цели числа - координати на 2 точки.
// Функцията да връща разстоянието между тези точки.

//Вход: 1 1 4 3, Изход: 3,605

double distBetweenTwoDots(int a, int b, int c, int d)
{
    return sqrt((c-a)*(c-a)+(d-b)*(d-b));
}



int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << distBetweenTwoDots(a,b,c,d);


    return 0;
}