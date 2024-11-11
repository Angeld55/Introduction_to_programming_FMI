#include <iostream>
using namespace std;

//function from task 2
bool isDigit(char a) {
	return ((a >= '0') && (a <= '9'));
}

unsigned toNumber(char a) {
	if (!isDigit(a)) {
		return a;
    }
	return a - 48;
}

char toCharacter(int num) {
	if (num > 9 || num < 0) {
		return num;
    }
	return num + '0';
}


int main() {

}