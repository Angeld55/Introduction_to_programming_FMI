#include <iostream>
using namespace std;


//Зад. Вход N. Да пресметнете 2^n

unsigned int powerOfTwo(unsigned int n)
{
    if(n > 31)
        return 0; //error
        
    return 1 << n;   
}


int main()
{
    cout << powerOfTwo(8);
    
}
