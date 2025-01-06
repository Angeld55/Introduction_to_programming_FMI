#include <iostream>
using namespace std;


unsigned countCharOccurences(const char* str, char ch)
{
    unsigned count = 0;
    while(*str)
    {
        if(*str == ch)
            count++;
        str++;
    }
    return count;
}

unsigned getEndOfTokenIndex(const char* str, unsigned ch)
{
    for(int i = 0;; i++)
    {
        if(str[i] == '\0' || str[i] == ch)
            return i;
    }
    return -1;
}

void copyNChars(const char* source, char* dest, unsigned N)
{
    for(int i = 0; i < N; i++)
        dest[i] = source[i];
}

char** split(const char* str, char separator)
{
    unsigned resultSize = countCharOccurences(str, separator) + 2;
    char** result = new char*[resultSize];
    result[resultSize - 1] = nullptr; //the sentinel
    unsigned resultIndex = 0;
    
    while(*str)
    {
        int sepIndex = getEndOfTokenIndex(str, separator);
        
        char* currentToken = new char[sepIndex + 1];
        currentToken[sepIndex] = '\0'; //the string sentinel
        
        copyNChars(str, currentToken, sepIndex);
        str += sepIndex; //skip the token
        
        result[resultIndex++] = currentToken;
        
        if(*str == separator)
            str++;
    }
    return result;
}

void printWords(char** tokens)
{
    while(*tokens) //if the first pointer is not nullptr
    {
        cout << *tokens << endl;
        tokens++; //go to the next pointer
    }
}

void free(const char** str)
{
    for(int i = 0; str[i] != nullptr; i++)
        delete[] str[i];
    delete[] str;
}
int main()
{
    char** res = split("this!is!test!spliting", '!');
    
    printWords(res);
    
    free(res);

    return 0;
}
