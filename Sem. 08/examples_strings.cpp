
#include <iostream>

using namespace std;


size_t myStrlen(const char* str)
{
    size_t count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

void myStrCopy(const char* source, char* dest)
{
    while(*source != '\0')
    {
        *dest = *source;
        source++;
        dest++;
    }
    *dest = '\0';
}

int myStrCmp(const char* first, const char* second)
{
    while(*first != '\0' && *second != '\0')
    {
        if(*first > *second)
            return 1;
        else if(*first < *second)
            return -1;
        first++;
        second++;
    }
    if(*first == '\0' && *second == '\0')
        return 0;
    
    return *first == '\0' ? -1 : 1;
}

int main()
{
  char str[] = "TEST HELLO";
  
  char str2[2000];
  
  myStrCopy(str, str2);
  
  cout << str2;
    
}
