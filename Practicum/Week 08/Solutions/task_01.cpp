#include <iostream>
using namespace std;
int digitOccurenices(int number, int digit) {
	int digitCount = 0;
	while (number > 0) {
		if (number % 10 == digit) {
			digitCount++;
		}
		number /= 10;
	}
	return digitCount;
}
bool hasUniqueDigits(int number) {

	for (size_t i = 0; i < 9; i++)
	{
		if (digitOccurenices(number, i) > 1) {
			return false;
		}
	}
	return true;
}


int main() {
	int n = 12345;
	std::cout << hasUniqueDigits(n);
}




