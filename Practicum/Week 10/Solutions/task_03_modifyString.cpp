#include <iostream>
using namespace std;

void smallToCapital(char& ch) {
	ch = ch - 'a' + 'A';
}

void capitalToSmall(char& ch) {
	ch = ch + 'a' - 'A';
}

bool isLetterSmall(char ch) {
	return ('a' <= ch && ch <= 'z');
}

bool isLetterCapital(char ch) {
	return ('A' <= ch && ch <= 'Z');
}

void convertStringLetters(char* str) {
	if (!str) {
		return;
    }

	while (*str) {
		if (isLetterSmall(*str)) {
			smallToCapital(*str);
        }
		else if (isLetterCapital(*str)) {
			capitalToSmall(*str);
        }
		str++;
	}
}

int main() {

}