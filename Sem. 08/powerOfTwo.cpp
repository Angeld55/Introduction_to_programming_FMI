#include <iostream>
using namespace std;


//Зад. Вход N. Да пресметнете 2^n

unsigned powerOfTwo(unsigned n)
{
    const int LIMIT = sizeof(unsigned) * 8;
    if(n >= LIMIT)
        return 0; //error
        
    return 1 << n;   
}


int main()
{
    cout << powerOfTwo(8);
    
}
