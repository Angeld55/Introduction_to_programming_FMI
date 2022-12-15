#include <iostream>
#pragma warning (disable: 4996)

const unsigned MAX_SIZE2 = 4;
const unsigned MAX_SIZE = 1024;
const unsigned ALPHABET_SIZE = 26;
const unsigned MATRIX_SIZE = 3;

//task 1
void removeChar(char* arr, char ch)
{
	char buff[MAX_SIZE];
	size_t len = strlen(arr);
	char buffCnt = 0;
	for (size_t i = 0; i < len; ++i)
	{
		if (arr[i] != ch)
		{
			buff[buffCnt] = arr[i];
			++buffCnt;
		}
	}
	buff[buffCnt] = '\0';
	strcpy(arr, buff);
}

//task 2
void fromCapital(char* arr)
{
	unsigned diff = 'A' - 'a';
	unsigned strLen = strlen(arr);
	for (unsigned i = 0; i < strLen; ++i)
	{
		if ('A' <= arr[i] && arr[i] <= 'Z')
			arr[i] = arr[i] + diff;
	}
}

void validation(char* arr)
{
	fromCapital(arr);
	size_t len = strlen(arr);
	for (size_t i = 0; i < len; ++i)
	{
		if (arr[i] < 'a' || arr[i]>'z')
		{
			removeChar(arr, arr[i]);
			--i;
			len = strlen(arr);
		}
	}
}

void sort(char* arr)
{
	validation(arr);
	unsigned counter[ALPHABET_SIZE] = { 0 };
	size_t len = strlen(arr);
	for (size_t i = 0; i < len; ++i)
		counter[arr[i] - 'a'] += 1;

	char buff[MAX_SIZE] = { '\0' };
	unsigned indexToPut = 0;
	for (unsigned i = 0; i < ALPHABET_SIZE; ++i)
	{
		char letterToPut = i + 'a';
		for (unsigned j = 0; j < counter[i]; ++j)
		{
			buff[indexToPut] = letterToPut;
			++indexToPut;
		}
	}
	strcpy(arr, buff);
}

//task 3
void biggestColumn(const int matrix[MATRIX_SIZE][MATRIX_SIZE], int res[MATRIX_SIZE])
{
	int currentBiggestSum = -2147483648; //The smallest integer
	unsigned index;
	for (unsigned i = 0; i < MATRIX_SIZE; ++i)
	{
		int currentSum = 0;
		for (unsigned j = 0; j < MATRIX_SIZE; ++j)
			currentSum += matrix[j][i];
		
		if (currentSum > currentBiggestSum)
		{
			currentBiggestSum = currentSum;
			index = i;
		}
	}

	for (unsigned i = 0; i < MATRIX_SIZE; ++i)
		res[i] = matrix[i][index];
}
//task 4
void removeRow(int matrix[MAX_SIZE2][MAX_SIZE2], unsigned index)
{
	unsigned toWhere = MAX_SIZE2 - 1;
	for (unsigned i = index-1; i < toWhere; ++i)
	{
		unsigned toGet = i + 1;
		for (unsigned j = 0; j < MAX_SIZE2; ++j)
			matrix[i][j] = matrix[i + 1][j];
	}

	for (unsigned i = 0; i < MAX_SIZE2; ++i)
		matrix[MAX_SIZE2 -1][i] = 0;
}

//task 5
void clear(char arr[])
{
	for (unsigned i = 0; i < 1024; ++i)
		arr[i] = '\0';
}

void longestPalindrome(const char* arr, unsigned len, char res[])
{
	clear(res);
	unsigned startIndex = 0;
	unsigned resLen = 0;
	while (arr[startIndex] != '\0')
	{
		char buff[MAX_SIZE];
		clear(buff);
		unsigned currPalLen = 0;
		unsigned startIndexCopy = startIndex;
		unsigned firstIndexMet = 0;
		bool isPalindrome = false;

		for (unsigned i = len; i > startIndex-1; --i)
		{
			if (arr[startIndexCopy] == arr[i])
			{
				buff[firstIndexMet] = arr[i];
				++firstIndexMet;
				++currPalLen;
				++startIndexCopy;
				isPalindrome = true;
			}

			else
			{
				firstIndexMet = 0;
				if (isPalindrome)
					clear(buff);

				isPalindrome = false;
				currPalLen = 0;
			}
		}

		if (currPalLen > resLen)
		{
			strcpy(res, buff);
			resLen = currPalLen;
		}

		++startIndex;
	}
}



int main()
{
	////task1
	//char arr[MAX_SIZE] = "hello world";
	//removeChar(arr, 'o');
	//std::cout << arr;

	////task 2
	//char arr[MAX_SIZE] = "hello world";
	//sort(arr);
	//std::cout << arr;

	////task3
	//int matrix[MATRIX_SIZE][MATRIX_SIZE] = { {1, 2, 3}, {4, 5, 6}, {3, 2, 1} };
	//int result[MATRIX_SIZE] = { 0 };
	//biggestColumn(matrix, result);
	//std::cout << "[";
	//for (unsigned i = 0; i < MATRIX_SIZE; ++i)
	//	std::cout << result[i] << " ";
	//std::cout << "]";

	////task4
	//int matrix[MAX_SIZE2][MAX_SIZE2] = { {1, 1, 1, 1 }, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4} };
	//removeRow(matrix, 2);
	//for (unsigned i = 0; i < MAX_SIZE2; ++i)
	//{
	//	for (unsigned j = 0; j < MAX_SIZE2; ++j)
	//		std::cout << matrix[i][j];
	//	std::cout << std::endl;
	//}

	////task 5 test
	//char arr[MAX_SIZE] = "caadalabiacaib";
	//char res[MAX_SIZE];
	//longestPalindrome(arr, strlen(arr), res);
	//std::cout << res;
}