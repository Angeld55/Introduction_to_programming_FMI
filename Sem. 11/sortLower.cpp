#include <iostream>
using namespace std;

bool isLower(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

unsigned getLowerCount(const char* str)
{
    if(!str)
        return 0;
    
    unsigned count = 0;
    while(*str)
    {
        if(isLower(*str))
            count++;
        
        str++;
    }
    return count;
}

void concatLettersAtBack(char* str, unsigned firstIndex, char ch, unsigned count)
{
    for(int i = 0; i < count; i++)
        str[firstIndex + i] = ch;
}

char* sortLower(const char* str)
{
    unsigned lower = getLowerCount(str);
    char* result = new char[lower + 1];
    
    constexpr unsigned alphabet_size = 26;
    constexpr char first_letter = 'a';
    
    result[lower] = '\0';
 
    unsigned resultIndex = 0;
    int countLower[alphabet_size]{ 0 };
    while (*str)
    {
        if (isLower(*str))
            countLower[*str - 'a']++;
        str++;
    }
    for (int i = 0; i < alphabet_size; i++)
    {
        concatLettersAtBack(result, resultIndex, first_letter + i, countLower[i]);
        resultIndex += countLower[i]; //maybe this should be in the function
    }
 
    return result;
}

int main()
{
    char* str = sortLower("zAzAbbzazQc");
    
    cout << str;
    delete[] str;

    return 0;
}
