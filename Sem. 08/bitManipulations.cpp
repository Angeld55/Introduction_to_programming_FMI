#include <iostream>
using namespace std;


const int LIMIT = sizeof(unsigned) * 8;

bool checkBit(unsigned int n, unsigned ind)
{
    if (ind >= LIMIT)
        return false; 

    unsigned int mask = 1;
    mask <<= ind;
    return (mask & n) == mask;
}

unsigned makeBitZero(unsigned int n, unsigned int ind) //clear bit
{
    if (ind >= LIMIT)
        return false;

    unsigned int mask = 1;
    mask <<= ind;

    mask = ~mask;

    return n & mask;
}

unsigned makeBitOne(unsigned int n, unsigned int ind) //set bit
{
    if (ind >= LIMIT)
        return false;

    unsigned int mask = 1;
    mask <<= ind;

    return n | mask;
}


unsigned toggleBitOne(unsigned int n, unsigned int ind)
{
    if (ind >= LIMIT)
        return false;

    unsigned int mask = 1;
    mask <<= ind;

    return n ^ mask;
}

int main()
{


}
