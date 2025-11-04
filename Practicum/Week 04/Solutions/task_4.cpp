#include <iostream>
using namespace std;

bool isDigit(char symbol) 
{
	return (symbol >= '0' && symbol <= '9');
}
int toNumber(char symbol)
{
    if(isDigit(symbol))
    {
        return symbol - '0';
    }
    else
    {
        cout << "Not a number";
        return - 1;
    }
}
char toCharacter(int number)
{
    if(number >= 0 && number <= 9)
    {
        return '0' + number;
    }
    else
    {
        cout << "Not a digit";
        return '?';
    }
}