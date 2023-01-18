
#include <iostream>
#include <climits>
using namespace std;


unsigned min(unsigned a, unsigned b)
{
    return a < b ? a : b;
}   
unsigned min(unsigned a, unsigned b, unsigned c)
{
    return min(min(a,b),c);   
}

unsigned getMinOperations_rec(unsigned n, unsigned* cache)
{
    if(n == 1)
        return 0;

    if(cache[n] != 0)
    {
        return cache[n];
    }
           
    unsigned div2 = INT_MAX, div3 = INT_MAX, min1 = INT_MAX;
    
    if(n % 3 == 0)
    {
        div3 = getMinOperations_rec(n / 3, cache);   
    }
    if(n % 2 == 0)
    {
        div2 = getMinOperations_rec(n / 2, cache);
    }   
    min1 = getMinOperations_rec(n - 1, cache);
    
    unsigned res = min(div2, div3, min1) + 1;
    cache[n] = res;
    return res;
    
}

unsigned getMinOperations(unsigned n)
{
    unsigned* cache = new unsigned[n + 1]{0};
    unsigned res = getMinOperations_rec(n, cache);
    delete[] cache;
    return res;
}
int main()
{
    cout << getMinOperations(200);

    return 0;
}
