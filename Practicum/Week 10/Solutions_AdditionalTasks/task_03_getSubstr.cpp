#include <iostream>
using namespace std;

const size_t SIZE = 1024;

size_t strLen(const char* str) {
    if (!str) {
        return 0;
    }
    size_t len = 0;
    while (*str) {
        len++;
        str++;
    }
    return len;
}

void getSubStr(const char* str, char* result, size_t begin, size_t end) {
    size_t len = strLen(str);
    if (!str || begin >= len || begin > end) {
        return;
    }
    end = (end > len) ? len : end;
    int resIter = 0;
    for (int i = begin; i <= end; i++) {
        result[resIter++] = str[i];
    }
    resIter++;
    result[resIter] = '\0';
}

int main() {
    char str[SIZE] = "Hello";
    char res[SIZE] = "";
    getSubStr(str, res, 1, 3);
    cout << res;
}