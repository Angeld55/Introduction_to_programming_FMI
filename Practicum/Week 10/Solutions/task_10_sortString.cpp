#include <iostream>
using namespace std;

void fromCapital(char* str) {
	if (!str) {
		return;
    }
	while (*str) {
		if (isLetterCapital(*str)) {
			capitalToSmall(*str);
        }
	}
}

void validation(char* arr) {
	fromCapital(arr);
	size_t len = strLen(arr);
	for (size_t i = 0; i < len; ++i) {
		if(!isLetterSmall(arr[i])) {
			removeChar(arr, arr[i]);
			--i;
			len = strLen(arr);
		}
	}
}

void sort(char* str) {
	if (!str) {
		return;
    }

	validation(str);
	int counter[LETTERS];

	fillIntegerWithZeros(counter, LETTERS);
	size_t len = strLen(str);
	for (size_t i = 0; i < len; ++i) {
		counter[str[i] - 'a'] += 1;
    }

	char buff[MAX_SIZE];
	*buff = '\0';

	unsigned indexToPut = 0;
	for (unsigned i = 0; i < LETTERS; ++i) {
		char letterToPut = i + 'a';
		for (unsigned j = 0; j < counter[i]; ++j) {
			buff[indexToPut] = letterToPut;
			++indexToPut;
		}
	}
	strcpy(str, buff);
}

int main() {

}