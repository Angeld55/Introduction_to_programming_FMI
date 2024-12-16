#include <iostream>
using namespace std;

const int SIZE = 100;
const int SIZE2 = 10;

void strCopy(char* dest, const char* source) {
	if (!dest || !source) {
		return;
    }
	while (*source) {
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

void splitWordsWithBuffer(const char* array, char matrix[][SIZE2], size_t size) {
	if (!array) {
		return;
    }
	char buffer[SIZE];
	int line = 0, index = 0;

	while (*array) {
		if (*array == ' ') {
			buffer[index] = '\0';
			strCopy(matrix[line], buffer);
			line++;
			buffer[0] = '\0';
			index = 0;
		}
		else {
			buffer[index] = *array;
			index++;
		}
		array++;
	}
	buffer[index] = '\0';
	strCopy(matrix[line], buffer);
}

void splitWordsWithoutBuffer(const char* array, char matrix[][SIZE2], size_t size) {
	if (!array) {
		return;
    }
	int line = 0, indexToPut = 0;

	while (*array) {
		if (*array == ' ') {
			matrix[line][indexToPut] = '\0';
			line++;
			indexToPut = 0;
		}
		else {
			matrix[line][indexToPut] = *array;
			indexToPut++;
		}
		array++;
	}
	matrix[line][indexToPut] = '\0';
}

void printMatrix(const char matrix[SIZE][SIZE2]) {
	for (int i = 0; i < SIZE; i++) {
		cout << matrix[i]<<'\n';
	}
}

void clear(char matrix[SIZE][SIZE2]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE2; j++) { 
			matrix[i][j] = '\0';
        }
	}
}

int main()
{
	char str[] = "hi my name is hristo";
	char matrix[SIZE][SIZE2];
	clear(matrix);
	splitWordsWithoutBuffer(str, matrix, SIZE2);
	printMatrix(matrix);

}