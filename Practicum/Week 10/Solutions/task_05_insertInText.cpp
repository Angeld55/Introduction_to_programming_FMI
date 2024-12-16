#include <iostream>
using namespace std;

void insertLetter(const char* text, char* result, char symbol, int index) {
	if (!text || !result) {
		return;
    }

	for (int i = 0; i < index; i++) {
		result[i] = text[i];
    }

	result[index] = symbol;
	text += index;
	result = result + index + 1;
	
	while (*text) {
		*result = *text;
		result++;
		text++;
	}

	*result = '\0';
}

int main() {

}