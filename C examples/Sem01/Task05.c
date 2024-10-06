#include <stdio.h>

int main() 
{
    int money;
    scanf("%d", &money);

    unsigned int hundred = money / 100;
    printf("%u x 100 lv\n", hundred);
    money = money % 100;

    unsigned int fifty = money / 50;
    printf("%u x 50 lv\n", fifty);
    money = money % 50;

    unsigned int twenty = money / 20;
    printf("%u x 20 lv\n", twenty);
    money = money % 20;

    unsigned int ten = money / 10;
    printf("%u x 10 lv\n", ten);
    money = money % 10;

    unsigned int five = money / 5;
    printf("%u x 5 lv\n", five);
    money = money % 5;

    unsigned int two = money / 2;
    printf("%u x 2 lv\n", two);
    money = money % 2;

    printf("%d x 1 lv\n", money);

    return 0;
}
