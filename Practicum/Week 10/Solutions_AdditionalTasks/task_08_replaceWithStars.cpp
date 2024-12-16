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
    reutrn len;
}

void replaceSubstringWithStars(char* text, const char* substring) {
    int textLength = strLen(text);
    int subLength = strLen(substring);

    if (subLength == 0 || subLength > textLength) {
        return;
    }

    for (int i = 0; i <= textLength - subLength; ++i) {
        bool match = true;

        for (int j = 0; j < subLength; ++j) {
            if (tolower(text[i + j]) != tolower(substring[j])) {
                match = false;
                break;
            }
        }

        if (match) {
            for (int j = 0; j < subLength; ++j) {
                text[i + j] = '*';
            }
            i += subLength - 1;
        }
    }
}

int main() {
    char text[] = "Howdy! How are you? How was your day?";
    const char substring[] = "how";

    replaceSubstringWithStars(text, substring);

    cout << text;
}