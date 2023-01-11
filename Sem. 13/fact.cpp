#include <iostream>
using namespace std;


unsigned fact(unsigned n)
{
    if(n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    cout<< fact(10);

    return 0;
}
