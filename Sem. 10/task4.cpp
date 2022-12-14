#include <iostream>
#include <cstring>
using namespace std;

bool isLower(char ch)
{
    return ch >= 'a' && ch <='z';
}

size_t lowerCount(const char* str, int hist[])
{
    size_t count = 0;
    while(*str)
    {
        if(isLower(*str))
        {
            count++;
            hist[*str - 'a']++;
        }
        str++;
    }
    return count;
}

char* sortLower(const char* str)
{
    int hist[26] = {0};
    size_t size = lowerCount(str, hist);
    
    char* newStr = new char[size + 1];
    size_t strIter = 0;
    
    for(int i = 0; i < 26; i++)
    {
        while(hist[i] > 0 )
        {
            newStr[strIter++] = i + 'a';
            hist[i]--;
        }
    }
    newStr[size] = '\0';
    
    return newStr;
}

int main()
{
    char* res = sortLower("ABCaaccbbe");
    
    cout << res;
    delete[] res;
}
