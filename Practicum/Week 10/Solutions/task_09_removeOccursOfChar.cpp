#include <iostream>
using namespace std;

size_t strLen(const char* str) {
    size_t len = 0;
    while(*str) {
        len++;
        str++;
    }
    return len;
}

void strCopy(char* dest, const char* source) {
	if (!dest || !source) {
		return;
    }
	while (*source) {
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

void removeChar(char* arr, char ch) {
	if (!arr) {
		return;
    }
	char buff[MAX_SIZE];
	size_t len = strLen(arr);
	char buffCnt = 0;
	
	for (size_t i = 0; i < len; ++i) {
		if (arr[i] != ch) {
			buff[buffCnt] = arr[i];
			++buffCnt;
		}
	}
	buff[buffCnt] = '\0';
	strCopy(arr, buff);
}

int main() {

}