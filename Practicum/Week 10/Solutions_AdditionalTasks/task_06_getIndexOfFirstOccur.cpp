#include <iostream>
using namespace std;

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

int findFirstOccurrence(const char* text, const char* word) {
    size_t textLength = strLen(text);
    size_t wordLength = strLen(word);

    if (wordLength == 0 || textLength == 0 || wordLength > textLength) {
        return -1;
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
            return i;
        }
    }

    return -1;
}

int main() {
    const char text[] = "Hello my friend!";
    const char word[] = "my";

    cout << findFirstOccurrence(text, word);
}
