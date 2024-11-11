#include <iostream>
using namespace std;

//functions from task 2
bool isLower(char a) {
	return ((a >= 'a') && (a <= 'z'));
}
bool isUpper(char a) {
	return ((a >= 'A') && (a <= 'Z'));
}


char toUpper(char a) {
	if (!isLower(a)) {
		return a;
    }
	return a - 'a' + 'A';
}

char toLower(char a) {
	if (!isUpper(a)) {
		return a;
    }
	return a + 'a' - 'A';
}

int main() {
    
}