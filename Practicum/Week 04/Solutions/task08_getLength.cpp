#include <iostream>
using namespace std;

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

int main() {
    int num;
    cin >> num;
    unsigned len = getLength(num);
    cout << len;
}