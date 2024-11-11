#include <iostream>
using namespace std;

unsigned int reverse(unsigned int n) {
	unsigned reversedNumber = 0;
	while (n != 0) {
		unsigned int lastDigit = n % 10;
		(reversedNumber *= 10) += lastDigit;
		n /= 10; //removes the last digit
	}
	return reversedNumber;
}

void splitInOddsAndEvens(int number, int& resultEven, int& resultOdd) {
	resultEven = 0;
	resultOdd = 0;

	unsigned reversedNum = reverse(number);
	bool isCurrentPosOdd = true;

	while (reversedNum != 0) {

		unsigned digitToAdd = reversedNum % 10;
		reversedNum = reversedNum / 10;

		if (isCurrentPosOdd) {
			resultOdd = resultOdd * 10 + digitToAdd;
			isCurrentPosOdd = false;

			continue;
		}

		resultEven = resultEven * 10 + digitToAdd;
		isCurrentPosOdd = true;
	}
}

int main() {
    int n;
    cin >> n;

    int even, odd;
    splitInOddsAndEvens(n, even, odd);
    cout << even << ", " << odd;
}