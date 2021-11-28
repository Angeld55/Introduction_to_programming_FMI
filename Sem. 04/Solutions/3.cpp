#include <iostream>
#include <cmath>
using namespace std;

// Напишете функция, която приема 6 целочислени координати (3 точки)
// и връща обиколката на триъгълника по тези точки.

//Вход: 1 1 4 7 0 10, Изход: 20.764

double triangleParameter(int a, int b, int c, int d, int e, int j)
{
    return sqrt((c-a)*(c-a)+(d-b)*(d-b)) + sqrt((e-c)*(e-c)+(j-d)*(j-d)) +
    sqrt((e-a)*(e-a)+(j-b)*(j-b));
}


int main()
{
    int a, b, c, d , e ,j;
    cin >> a >> b >> c >> d >> e >> j;
    cout << triangleParameter(a,b,c,d,e,j);

    return 0;
}