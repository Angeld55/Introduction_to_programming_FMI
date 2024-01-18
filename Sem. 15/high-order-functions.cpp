#include <iostream>
using namespace std;


unsigned getCharsCountCond(const char* str, bool(*pred)(char))
{
    unsigned count = 0;

    while (*str)
    {
        if (pred(*str))
            count++;
        str++;
    }
    return count;
}

bool isDigit(char ch)
{
    return ch >= '0' && ch <= '9';
}
int main()
{
    cout << "Digits count: " << getCharsCountCond("abc341XY", isDigit) << endl;
    cout << "All chars: "    << getCharsCountCond("abc341XY", [](char ch){return true;}) << endl;

}
