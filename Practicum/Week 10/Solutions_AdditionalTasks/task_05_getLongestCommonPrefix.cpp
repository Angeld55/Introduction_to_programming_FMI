#include <iostream>
using namespace std;

const size_t SIZE = 1024;

void getLongestCommonPreffix(const char* str1, const char* str2, const char* str3, char* res) {
    if (!str1 || !str2 || !str3) {
        return;
    }

    while (*str1 && *str2 && *str3) {
        if (*str1 == *str2 && *str1 == *str3) {
            *res = *str1;
            res++;
        }
        str1++;
        str2++;
        str3++;
    }
    *res = '\0';
}

int main() {
    char str1[SIZE] = "flower";
    char str2[SIZE] = "flow";
    char str3[SIZE] = "flight";
    char res[SIZE] = "";
    getLongestCommonPreffix(str1, str2, str3, res);
    cout << res;
}