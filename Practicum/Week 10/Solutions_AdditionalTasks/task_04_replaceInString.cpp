#include <iostream>
using namespace std;

const size_t SIZE = 1024;

void replaceInString(char* str, char x, char a, char b) {
    size_t counter = 0;
    while (*str) {
        if (*str == x) {
            if (!(counter % 2)) {
                *str = a;
            }
            else {
                *str = b;
            }
            counter++;
        }
        str++;
    }
}

int main() {
    char str[SIZE] = "H_ll_ my fri_nd";
    replaceInString(str, '_', 'e', 'o');
    cout << str;
}