#include <iostream>
using namespace std;

const size_t SIZE = 1024;

bool isLowerCase(char ch) {
    return ch >= 'a' && ch <= 'z';
}

void saveOnlyLowerCase(const char* str, char* result) {
    if (!str) {
        return;
    }

    while(*str) {
        if (isLowerCase(*str)) {
            *result = *str;
            result++;
        }
        str++;
    }
    *result = '\0';
}

int main() {
    char str[SIZE] = "aBc!?Def";
    char result[SIZE] = "";
    saveOnlyLowerCase(str, result);
    cout << result; 
}