#include <iostream>
using namespace std;

void fillBoolWithZeros(bool* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = false;
    }
}

int convertCharToInt(char ch) {
	return  ch - '0';
}

void difference(const char* str1, const char* str2, char* res) {
	if (!str1 || !str2 || !res)
		return;

	bool letters1[LETTERS];
	bool letters2[LETTERS];

	fillBoolWithZeros(letters1, LETTERS);
	fillBoolWithZeros(letters2, LETTERS);

	while (*str1) {
		letters1[convertCharToInt(*str1)] = true;
		str1++;
	}

	while (*str2) {
		letters2[convertCharToInt(*str2)] = true;
		str2++;
	}

	for (int i = 0; i < LETTERS; i++) {
		if (letters1[i] != letters2[i]) {
			*res = i + 'a';
			res++;
		}
	}
	*res = '\0';
}

int main() {

}