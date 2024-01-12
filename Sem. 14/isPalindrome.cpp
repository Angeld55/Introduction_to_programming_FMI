#include <iostream>
#include <cstring>
using namespace std;

bool isPalinromeRec(const char* str, size_t len)
{
    if(len <= 1)
        return true;
    
    return str[0] == str[len - 1] && isPalinromeRec(str + 1, len - 2);
}
bool isPalinrome(const char* str)
{
    return isPalinromeRec(str, strlen(str));
}
int main()
{
    cout<<isPalinrome("abcba");

    return 0;
}
