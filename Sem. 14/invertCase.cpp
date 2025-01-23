#include <iostream>


void invertChar(char& ch)
{
    if (islower(ch))
        ch = toupper(ch);
    else if (isupper(ch))
        ch = tolower(ch);
}
void invertCaseRec(char* str)
{
    if (!*str)
        return;

    invertChar(*str);
    invertCaseRec(str + 1);
}

int main()
{
    char str[] = "qBc";
    invertCaseRec(str);
    std::cout << str;
   
}
