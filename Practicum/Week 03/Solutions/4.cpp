#include <iostream>
using namespace std;

int main() {
   	int n = 0;
	cin >> n;

	int mostCommonDigit = 0;
	int mostCommonDigitOccurrences = 0;

		for (int i = 9; i >= 0; i--) {
			int copyOfN = n;
			int currDigitOccurences = 0;

			while (copyOfN != 0) {
				int lastDigit = copyOfN % 10;
				 
				if (lastDigit == i) {
					currDigitOccurences++;
				}
				copyOfN /= 10;
			}

			if (currDigitOccurences >= mostCommonDigitOccurrences) {
				mostCommonDigit = i;
				mostCommonDigitOccurrences = currDigitOccurences;
			}

		}
		cout << mostCommonDigit;
}