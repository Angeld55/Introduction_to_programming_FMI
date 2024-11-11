#include <iostream>
using namespace std;

//function from task 8
unsigned getLength(int number) {
	unsigned result = 0;
	if (!number) {
		return ++result;
    }
	while (number != 0) {
		++result;
		number = number / 10;
	}
	return result;
}

//function from task 1
unsigned absoluteValue(int n) {
	if (n < 0)
		return -n;
	return n;
}

int getDigitOnPosition(int number, unsigned position) {
	unsigned len = getLength(number);
	if (position > len) {
		return -1;
    }
	//We convert the number to possitive because if we have (-123, 1) the program will return -1
	number = absoluteValue(number);

	unsigned whereTo = len - position;
	for (unsigned i = 0; i < whereTo; i++) {
		number = number / 10;
    }
	return number % 10;
}

int main() {

}