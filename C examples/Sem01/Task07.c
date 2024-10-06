#include <stdio.h>

int main() 
{
    char ch;
    scanf("%c", &ch);

    int isVowel = ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'i'
               || ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U' || ch == 'I';

    printf("%d\n", isVowel);

    return 0;
}
