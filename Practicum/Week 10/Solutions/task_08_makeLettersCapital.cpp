#include <iostream>
using namespace std;

bool isLetterSmall(char ch) {
	return ('a' <= ch && ch <= 'z');
}

void smallToCapital(char& ch) {
	ch = ch - 'a' + 'A';
}

void capitalWords(char* str) {
	if (!str) {
		return;
    }

	bool toChange = true;
	while (*str) {
		if (toChange && isLetterSmall(*str)) {
			smallToCapital(*str);
			toChange = false;
		}
		else if (*str == ' ') {
			toChange = true;
        }
		str++;
	}
}

int main() {

}