#include <iostream>
using namespace std;

int main() {
	unsigned int baseNumber = 0;
	cin >> baseNumber;
	int start = 0, end = 0;
	cin >> start >> end;

	for (int i = start; i <= end; i++) {
		int curr = i;
		bool isSpecial = true;
		do {
			int digit = curr % 10;
			if (digit == 0 || baseNumber % digit != 0) {
				isSpecial = false;
				break;
			}

			curr /= 10;
		} while (curr != 0);

		if (isSpecial) {
			cout << i << ' ';
		}
	}
}