#include <iostream>
#include <cstring>
using namespace std;

bool isPrefixRec(const char* text, const char* pattern)
{
    if(!*pattern)
        return true;
    return *pattern == *text && isPrefixRec(text + 1, pattern + 1);
}
bool findInTextRec(const char* text, size_t textLen, const char* pattern, size_t patternLen)
{
    if(patternLen > textLen)
        return false;
    
    return isPrefixRec(text, pattern) || findInTextRec(text + 1, textLen - 1, pattern, patternLen);
}

bool findInText(const char* text, const char* pattern)
{
    return findInTextRec(text, strlen(text), pattern, strlen(pattern));
}

int main()
{
    cout<<findInText("abcba", "cb");

    return 0;
}
