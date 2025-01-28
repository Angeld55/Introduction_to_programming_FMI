#include <iostream>
using namespace std;

bool isCapital(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

bool isLower(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

void getLowerAndUpperCount(const char* str, int& lowerCount, int& capitalCount)
{
    if(*str == '\0')
        return;     
    
    if(isCapital(str[0]))
        capitalCount++;
    else if(isLower(str[0]))
        lowerCount++;
    getLowerAndUpperCount(str + 1, lowerCount, capitalCount);
} 

int main()
{
    int lowers, capitals;
    lowers = capitals = 0;
    getLowerAndUpperCount("afsdfsdSDFFDS", lowers, capitals);

    cout << lowers << " " << capitals << endl;
    return 0;
}
