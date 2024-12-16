#include <iostream>
using namespace std;

int strLen(const char* str) {
	if (!str) {
		return 0;
    }

	unsigned result = 0;
	while (*str) {
		result++;
		str++;
	}
	return result;
}

bool isPalindrome(const char* arr) {
	if (!arr) {
		return 0;
    }

	unsigned len = strLen(arr);
	const char* end = arr + len - 1;

	while (arr < end) {
		if (*arr != *end) {
			return false;
        }
		arr++;
		end--;
	}
	return true;
}

int main() {

}