#include <iostream>
using namespace std;

bool isLower(char a) {
	return ((a >= 'a') && (a <= 'z'));
}

bool isUpper(char a) {
	return ((a >= 'A') && (a <= 'Z'));
}

int main() {
    char a;
    cin >> a;
    cout << isLower(a) << " " << isUpper(a);
}