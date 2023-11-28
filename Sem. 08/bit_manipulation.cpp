bool checkBit(unsigned int n, unsigned ind)
{
    if(ind > 31)
        return false;
    unsigned int mask = 1;
    mask <<= ind;
    return (mask & n) == mask;
}

unsigned makeBitZero(unsigned int n, unsigned int ind)
{
    unsigned int mask = 1;
    mask <<= ind;
    
    mask = ~mask;
    
    return n & mask;
}

unsigned makeBitOne(unsigned int n, unsigned int ind)
{
    unsigned int mask = 1;
    mask <<= ind;
    
    return n | mask;
}

int main()
{

    
}
