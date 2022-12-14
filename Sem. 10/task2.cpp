#include <iostream>
#include <cstring>
using namespace std;

bool isLower(char ch)
{
    return ch >= 'a' && ch <='z';
}
bool isCapital(char ch)
{
    return ch >= 'A' && ch <='Z';
}

void getLowerAndCapitalCount(const char* str, size_t& capitalCount, size_t& lowerCount)
{
    capitalCount = lowerCount = 0;
    while(*str)
    {
        if(isLower(*str))
            lowerCount++;
        else if(isCapital(*str))
            capitalCount++;
     str++;   
    }

}

void getOnlySmallAndOnlyBigCharsStrings(const char* str, char*& lowers, char*& capitals)
{
    size_t lowerCount, capitalCount;
    getLowerAndCapitalCount(str, capitalCount, lowerCount);
    
    lowers = new char[lowerCount + 1];
    capitals = new char[capitalCount + 1];
    
    size_t lowersIter = 0, capitalsIter = 0;
    
    while(*str)
    {
        if(isLower(*str))
            lowers[lowersIter++] = *str;
        else if(isCapital(*str))
            capitals[capitalsIter++] = *str;
        str++;
    }
    lowers[lowersIter] = capitals[capitalsIter] = '\0';
}

int main()
{
    char* lowers;
    char* uppers;
    
    getOnlySmallAndOnlyBigCharsStrings("abDDcdef", lowers, uppers);
    
    cout << lowers << endl << uppers;
    
    delete[] lowers;
    delete[] uppers;
}
