#include <iostream>
using namespace std;

bool isDigit(char ch)
{
    return ch >= '0' && ch <= '9';
}
unsigned getSumOfNumbersInStr(const char* str, unsigned currAccNumber = 0, unsigned globalSum = 0)
{
    if (!*str)
    {
        globalSum += currAccNumber;
        return globalSum;
    }
    if (isDigit(*str))
        (currAccNumber *= 10) += (*str - '0');
    else
    {
        globalSum += currAccNumber;
        currAccNumber = 0;
    }
    return getSumOfNumbersInStr(str + 1, currAccNumber, globalSum);
}

int main()
{
    cout << getSumOfNumbersInStr("asd123as33d");
}
