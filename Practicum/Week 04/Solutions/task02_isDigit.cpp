#include <iostream>
using namespace std;

bool isDigit(char a) {
	return ((a >= '0') && (a <= '9'));
}

int main() {
    char ch;
    cin >> ch;
    cout << isDigit(ch);
}