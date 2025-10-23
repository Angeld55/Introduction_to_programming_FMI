#include <iostream>
using namespace std;

int main() {
    char symbol = ' ';
    cin >> symbol;

    if (symbol >= 'A' && symbol <= 'Z') {
        cout << "Uppercase letter";
        symbol = symbol + ('a'- 'A');
    } else if (symbol >= 'a' && symbol <= 'Z') {
        cout << "Lowercase letter";
        symbol = symbol + ('A' - 'a');
    }

    switch (symbol) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cout << "Vowel" << endl; break;
        default:
            cout << "Consonant" << endl; break;
    }
}