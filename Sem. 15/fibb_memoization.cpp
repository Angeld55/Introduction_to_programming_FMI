
#include <iostream>
#include <climits>
using namespace std;

unsigned fibb_rec(unsigned n, unsigned* cache)
{

    if(n <= 1)
        return 1;
    
    if(cache[n] != 0)
        return cache[n];
    else
    {
        int current = fibb_rec(n - 1, cache) + fibb_rec(n - 2, cache);
        cache[n] = current;
        return current;
    }
}

unsigned fibb(unsigned n)
{
    unsigned* cache = new unsigned[n + 1]{0};
    unsigned res = fibb_rec(n, cache); 
    delete[] cache;
    return res;
}


int main()
{
    cout << fibb(45);

    return 0;
}
