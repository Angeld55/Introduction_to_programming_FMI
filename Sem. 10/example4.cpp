#include <iostream>
using namespace std;


unsigned input(int**& matrix, int*& sizes)
{
	unsigned N;
	cin >> N;

	matrix = new int*[N];
	sizes = new int[N];

	for (unsigned i = 0; i < N; i++)
	{
		unsigned currentRowSize;
		cin >> currentRowSize;

		matrix[i] = new int[currentRowSize];
		sizes[i] = currentRowSize;

		for (unsigned j = 0; j < currentRowSize; j++)
			cin >> matrix[i][j];
	}

	return N;
}


int* concat(const int* row1, unsigned row1Size, const int* row2, unsigned row2Size)
{
	int* result = new int[row1Size + row2Size];

	for (unsigned i = 0; i < row2Size; i++)
		result[i] = row2[i];
	
	for (unsigned i = 0; i < row1Size; i++)
		result[row2Size + i] = row1[i];

	return result;
}

void freeMatrix(int** matrix, unsigned rowsSize)
{
	for (int i = 0; i < rowsSize; i++)
		delete[] matrix[i];
	delete[] matrix;
}

void task(int** matrix, unsigned N, int* sizes)
{
	unsigned resultRowsCount = (N + 1) / 2;
	int** resultMatrix = new int*[resultRowsCount];

	int* resultSizes = new int[resultRowsCount];

	for (unsigned i = 0; i < resultRowsCount; i++)
	{
		resultSizes[i] = sizes[i] + sizes[N - i - 1];
		resultMatrix[i] = concat(matrix[i], sizes[i], matrix[N - i - 1], sizes[N - i - 1]);
	}

	//print
	for (unsigned i = 0; i < resultRowsCount; i++)
	{
		for (unsigned j = 0; j < resultSizes[i]; j++)
			cout << resultMatrix[i][j] << " ";
		cout << endl;
	}

	delete[] resultSizes;
	freeMatrix(resultMatrix, resultRowsCount);

	delete[] sizes;
	freeMatrix(matrix, N);
}

int main()
{
	int** matrix;
	int* sizes;

	unsigned N = input(matrix, sizes); //not sure if I need this func

	task(matrix, N, sizes);
}
