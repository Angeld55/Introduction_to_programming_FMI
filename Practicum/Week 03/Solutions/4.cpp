#include <iostream>

int main(){
   	unsigned n;
		std::cin >> n;
		unsigned mostCommonDigit;
		unsigned mostCommonDigitOccurrences = 0;
		for (int i = 9; i >= 0; i--)
		{
			unsigned copyOfN = n;
			unsigned currDigitOccurences = 0;
			while (copyOfN != 0) {
				unsigned lastDigit = copyOfN % 10;
				if (lastDigit == i)
					currDigitOccurences++;
				copyOfN /= 10;
			}
			if (currDigitOccurences >= mostCommonDigitOccurrences) {
				mostCommonDigit = i;
				mostCommonDigitOccurrences = currDigitOccurences;
			}

		}
		std::cout << mostCommonDigit;
}