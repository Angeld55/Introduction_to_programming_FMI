#include <iostream>
using namespace std;

int main() {
    char ch = ' ';
    cin >> ch;

    bool isVowelLetter = (ch == 'a') ||
                        (ch == 'A') ||

                        (ch == 'e') ||
                        (ch == 'E') ||

                        (ch == 'i') ||
                        (ch == 'I') ||

                        (ch == 'o') ||
                        (ch == 'O') ||

                        (ch == 'u') ||
                        (ch == 'U');

    cout << isVowelLetter;
}