#include <iostream>
using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
 if (b == 0)
 return a;

 if (a <= b)
 return gcd(b, a);

 return gcd(b, a % b);
}


int main() 
{
   cout << gcd(16,24);
}
