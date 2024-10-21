#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if (number < 100) {
        printf("Less than 100\n");
    }
    else if (number <= 200) {
        printf("Between 100 and 200\n");
    }
    else {
        printf("Greater than 200\n");
    }

    return 0;
}
