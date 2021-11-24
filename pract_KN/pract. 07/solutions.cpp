void getBitwiseRepresentation(int n) {
	for (int i = 31; i >= 0; --i)
		std::cout << ((n & (1 << i)) != 0);
}

void flipFourthBit(int& n) {
	int mask = 1 << 3;
	n = n ^ mask;
}

int numberOfZeroesInBinaryRepresentation(int n) {
	int cnt = 0;
	for (int i = 0; i < 32; i++)
		cnt += ((n & (1 << i)) == 0);

	return cnt;
}

void setBit(int& n, int bitPosition, bool newBitValue) {
	int mask = 1 << bitPosition;
	bool oldBitIsOne = ((mask & n) != 0);
	if (oldBitIsOne ^ newBitValue)	n = n ^ mask;
}

void printSubset(int arr[], int length, int indexOfSet) {
	std::cout << "[";
	int commas = 0;
	int numberOfOnes = 32 - numberOfZeroesInBinaryRepresentation(indexOfSet);

	for (int i = 0; i < length; i++) {
		if (((indexOfSet & (1 << i)) != 0)) {
			std::cout << arr[i];

			if (++commas < numberOfOnes)
				std::cout << ", ";
		}
	}
	std::cout << ']' << std::endl;
}

void generateSubsets(int arr[], int length) {
	int border = 1 << length;
	for (int i = 0; i < border; i++)
		printSubset(arr, length, i);
}

//bonus: function to change the sign of a number
void changeSign(int& n) {
  n = ~n + 1;
}
