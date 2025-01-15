#include <iostream>
using namespace std;

int power(int n, int k)
{
    if(k == 0)
        return 1;
    return n * power(n , k - 1);
}

int main()
{
    cout<< power(2, 8);

    return 0;
}
