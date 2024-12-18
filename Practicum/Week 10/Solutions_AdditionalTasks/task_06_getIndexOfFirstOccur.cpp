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

void setFound(const char* text, const char* word, bool& found, int i, size_t wordLength) {
    for (int j = 0; j < wordLength; ++j) {
        if (text[i + j] != word[j]) {
            found = false;
            break;
        }
    }
}

int findFirstOccurrence(const char* text, const char* word) {
    size_t textLength = strLen(text);
    size_t wordLength = strLen(word);

    if (wordLength == 0 || textLength == 0 || wordLength > textLength) {
        return -1;
    }

    for (int i = 0; i <= textLength - wordLength; ++i) {
        bool found = true;
        setFound(text, word, found, i, wordLength);
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
