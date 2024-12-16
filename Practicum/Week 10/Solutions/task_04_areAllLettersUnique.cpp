#include <iostream>
using namespace std;

void fillBoolWithZeros(bool* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = false;
    }
}

bool areLettersUnique(const char* str) {
	if (!str) {
		return false;
    }

	bool letters[LETTERS];
	fillBoolWithZeros(letters, LETTERS);

	while (*str) {
		if (letters[*str - 'a'] == true) {
			return false;
        }
		else {
			letters[*str - 'a'] = true;
        }
        
		str++;
	}

	return true;
}

int main() {

}