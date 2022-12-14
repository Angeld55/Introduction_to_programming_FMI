#include <iostream>
#include <cstring>
using namespace std;

bool isDigit(char ch)
{
    return ch >= '0' && ch <='9';
}
size_t countDigitsInString(const char* str)
{
    size_t count = 0;
    while(*str != '\0')
    {
        if(isDigit(*str))
            count++;
        str++;        
    }
    return count;
}

size_t countNumbersInString(const char* str)
{
    size_t count = 0;
    bool wasLastDigit = false;
    while(*str != '\0')
    {
        bool isCurrentDigit = isDigit(*str);
        if(!wasLastDigit && isCurrentDigit)
            count++;
        wasLastDigit = isCurrentDigit;
        str++;
    }
    return count;
}


char* censoreNumbersFromString(const char* str)
{
    size_t toRemove = countDigitsInString(str);
    size_t toAdd = countNumbersInString(str);
    
    char* newStr = new char[strlen(str) + toAdd - toRemove + 1];
    
    size_t strIter = 0;
    size_t newStrIter = 0;
    
    while(str[strIter] != '\0')
    {
        if(!isDigit(str[strIter]))
        {
            newStr[newStrIter++] = str[strIter++];
        }
        else
        {
            if(newStrIter == 0 || newStr[newStrIter - 1] != '*')
                newStr[newStrIter++] = '*';
            strIter++;
        }
    }
    newStr[newStrIter] = '\0';
    return newStr;
}

int main()
{
    char* res = censoreNumbersFromString("1234adfsd45fffw3");
    
    cout << res << endl;
    delete[] res;
}
