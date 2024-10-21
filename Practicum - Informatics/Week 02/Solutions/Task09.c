#include <stdio.h>

int main() {
    double num1, num2;
    char op;
    scanf_s("%lf %c %lf", &num1, &op, 1, &num2);

    switch (op) {
    case '+': printf("%.2lf\n", num1 + num2); break;
    case '-': printf("%.2lf\n", num1 - num2); break;
    case '*': printf("%.2lf\n", num1 * num2); break;
    case '/':
        if (num2 != 0) {
            printf("%.2lf\n", num1 / num2);
        } else {
            printf("Cannot divide by zero\n");
        }
        break;
    default: printf("Invalid operation\n");
    }

    return 0;
}
