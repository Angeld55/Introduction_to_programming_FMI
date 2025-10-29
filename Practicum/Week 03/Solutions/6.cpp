#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int copyOfN = n;
	int nSize = 0;

	while (copyOfN > 0) {
		nSize++;
		copyOfN /= 10;
	}

	if (nSize % 2 == 0) {
		int result = 0;
		int resultSize = nSize - 2;
		int half = resultSize / 2;

		while (half != 0) {
			result *= 10;
			result += n % 10;
			n /= 10;
			half--;
		}

		n /= 100;
		half = resultSize / 2;

		while (half != 0) {
			result *= 10;
			result += n % 10;
			n /= 10;
			half--;
		}

		int reversed = 0;
		while (result != 0) {
			reversed *= 10;
			reversed += result % 10;
			result /= 10;
		}

		cout << reversed;
	}
	else {
		int result = 0;
		int resultSize = nSize - 1;
		int toRemove = resultSize / 2;

		for (int i = 0; i < nSize; i++) {
			if (i == toRemove) {
				n /= 10;
				continue;
			}
			result *= 10;
			result += n % 10;
			n /= 10;
		}

		int reversed = 0;
		while (result != 0) {
			reversed *= 10;
			reversed += result % 10;
			result /= 10;
		}
        
		cout << reversed;
	}
}