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

bool isDigit(char ch)
{
    return ch >= '0' && ch <= '9';
}

unsigned getCharCountCondition(const char* str, bool (*pred)(char))
{
    int count = 0;
    while(*str)
    {
        if(pred(*str))
            count++;
        str++;
    }
    return count;
}

unsigned getLowerCount(const char* str)
{
    return getCharCountCondition(str, isLower);
}


unsigned getCapitalCount(const char* str)
{
    return getCharCountCondition(str, isCapital);
}

unsigned getDigitsCount(const char* str)
{
    return getCharCountCondition(str, isDigit);
}

unsigned getWhitespacesCount(const char* str)
{
    return getCharCountCondition(str, [](char ch)  {return ch == ' ';} );
}

int main()
{
    char str[] = "Hello World";
    
    cout << getWhitespacesCount(str);

    return 0;
}
