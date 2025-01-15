#include <iostream>
using namespace std;

int fibb(int n)
{
    if(n == 0 || n == 1)
        return 1;
    return fibb(n - 1) + fibb(n - 2);    
}

int main()
{
    cout<< fibb(10);

    return 0;
}
