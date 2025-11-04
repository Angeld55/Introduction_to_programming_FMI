#include <iostream>
using namespace std;

bool isLower(char symbol)
{
    return (symbol >= 'a' && symbol <='z');
}
bool isUpper(char symbol)
{
    return (symbol >= 'A' && symbol <='Z');
}
char toUpper(char symbol)
{
    if(isLower(symbol))
    {
        return symbol - ('a' - 'A');
    }
    else
    {
        return symbol;
    }
}
char toLower(char symbol)
{
    if(isUpper(symbol))
    {
        return symbol + ('a' - 'A');
    }
    else 
    {
        return symbol;
    }
}