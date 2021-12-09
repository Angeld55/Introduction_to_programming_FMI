#include<iostream>
#include<cstring>
#pragma warning (disable : 4996)

const int MAXSIZE = 50;

//helpers:

//making every element of our matrix zero.
void nullMatrix(int matrix[MAXSIZE][MAXSIZE], int length) {
	for (int i = 0; i < length; i++)
		for (int j = 0; j < length; j++)
			matrix[i][j] = 0;
}

//printing our matrix.
void printMatrix(const int matrix[MAXSIZE][MAXSIZE], int length, int width = 3) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			std::cout.width(2);
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
	
//initializing our matrix
void initMatrix(int matrix[MAXSIZE][MAXSIZE], int length) {
	for (int i = 0; i < length; i++)
		for (int j = 0; j < length; j++)
			matrix[i][j] = (i + j) * (i + j + 1) / 2 + j;
}

//--> first:
int getSumBelowMainDiagonal(const int matrix[MAXSIZE][MAXSIZE], int length) {
	int res = 0;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < i; j++) {
			//res += matrix[i][j] * (matrix[i][j] % 2 == 0);
			if (matrix[i][j] % 2 == 0)
				res += matrix[i][j];
		}
	}
	return res;
}


//--> second:
int getSumAboveMainDiag(const int matrix[MAXSIZE][MAXSIZE], int length) {
	int res = 0;
	for (int i = 0; i < length; i++) {
		for (int j = length - 1; j >= i; j--) {
			if (matrix[i][j] % 2 != 0)
				res += matrix[i][j];
		}
	}
	return res;
}


//--> third:
void sqrtDiag(int matrix[MAXSIZE][MAXSIZE], int length) {
	for (int i = 0, j = length - 1; i < length; i++, --j) 
		matrix[i][j] *= matrix[i][j];
}


//--> fourth:
void flipRight(int matrix[MAXSIZE][MAXSIZE], int length) {
	int copyMatrix[MAXSIZE][MAXSIZE];
	for (int i = 0; i < length; i++)
		for (int j = 0; j < length; j++)
			copyMatrix[j][length - i - 1] = matrix[i][j];

	for (int i = 0; i < length; i++)
		for (int j = 0; j < length; j++)
			matrix[i][j] = copyMatrix[i][j];
}

void flipLeft(int matrix[MAXSIZE][MAXSIZE], int length) {
	int copyMatrix[MAXSIZE][MAXSIZE];

	for (int i = 0; i < length; i++)
		for (int j = 0; j < length; j++)
			copyMatrix[length - j - 1][i] = matrix[i][j];

	for (int i = 0; i < length; i++)
		for (int j = 0; j < length; j++)
			matrix[i][j] = copyMatrix[i][j];
}

void flipDiag(int matrix[MAXSIZE][MAXSIZE], int length) {
	int copyMatrix[MAXSIZE][MAXSIZE];
	for (int i = 0; i < length; i++)
		for (int j = 0; j < length; j++)
			copyMatrix[j][i] = matrix[i][j];

	for (int i = 0; i < length; i++)
		for (int j = 0; j < length; j++)
			matrix[i][j] = copyMatrix[i][j];
}

//--> fifth
void swapWords(char* fst, char* snd) {
	char temp[64];
	strcpy(temp, fst);
	strcpy(fst, snd);
	strcpy(snd, temp);
}

void sortWords(char words[64][64], int wordsCount) {
	//bubble sort:
	bool swapped = false;
	for (int i = 0; i < wordsCount; i++) {
		swapped = false;
		for (int j = 0; j < wordsCount - i - 1; j++) {
			if (strcmp(words[j], words[j + 1]) > 0) {
				swapped = true;
				swapWords(words[j], words[j + 1]);
			}
		}
		if (!swapped) break;
	}

}

bool isLetter(char c) {
	return (c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z');
}

void getSortedWords(const char* arg) {
	char words[64][64];
	unsigned length = strlen(arg);
	int wordsCount = 0;
	int currLetter = 0;

	for (int i = 0; i < length; i++) {
		if (arg[i] != ' ' && isLetter(arg[i])) {
			words[wordsCount][currLetter++] = arg[i];
		}
		else {
			words[wordsCount][currLetter] = '\0';
			++wordsCount;
			currLetter = 0;
		}
	}
	words[wordsCount][currLetter] = '\0';
	
	++wordsCount;

	for (int i = 0; i < wordsCount; i++)
		std::cout << words[i] << " ";

	sortWords(words, wordsCount);

	std::cout << std::endl;

	for (int i = 0; i < wordsCount; i++)
		std::cout << words[i] << " ";
}
