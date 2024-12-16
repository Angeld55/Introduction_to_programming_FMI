#include <iostream>
using namespace std;

const int SIZE = 1024;

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

int countOccurrences(const char* text, const char* word) {
    size_t textLength = strLen(text);
    size_t wordLength = strLen(word);
    size_t count = 0;

    if (wordLength == 0 || textLength == 0 || wordLength > textLength) {
        return 0;
    }

    for (int i = 0; i <= textLength - wordLength; ++i) {
        bool found = true;

        for (int j = 0; j < wordLength; ++j) {
            if (text[i + j] != word[j]) {
                found = false;
                break;
            }
        }

        if (found) {
            ++count;
            i += wordLength - 1;
        }
    }

    return count;
}

int main() {
    const char text[SIZE] = "abc abc abc";
    const char word[SIZE] = "abc";

    cout << countOccurrences(text, word);
}