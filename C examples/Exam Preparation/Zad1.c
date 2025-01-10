#include <stdio.h>
#include <stdlib.h>

int** initialize(int rows, int cols)
{
	int** boolVectors = (int**)malloc(rows * sizeof(int*));

	for (int i = 0; i < rows; i++)
	{
		boolVectors[i] = (int*)calloc(cols, sizeof(int));
	}

	return boolVectors;
}

void copyBoolVectorIntoCurrentRow(int* currentRow, int* boolVector, int size)
{
	for (int i = 0; i < size; i++)
	{
		currentRow[i] = boolVector[i];
	}
}

void generateCurrentBoolVector(int* currentRow, int* boolVector, int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		if (boolVector[i] == 0)
		{
			boolVector[i] = 1;
			break;
		}

		boolVector[i] = 0;
	}

	copyBoolVectorIntoCurrentRow(currentRow, boolVector, size);
}

void generateBoolVectors(int** matrix, int rows, int cols)
{
	int* boolVector = matrix[rows - 1];

	for (int i = 1; i < rows; i++)
	{
		generateCurrentBoolVector(matrix[i], boolVector, cols);
	}
}

void print(int** matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%d ", matrix[i][j]);
		}

		printf("\n");
	}
}

void deallocateMemory(int** matrix, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		free(matrix[i]);
	}

	free(matrix);
}

int main()
{
	int n; // cols
	scanf_s("%d", &n);

	int rows = (1 << n);

	int** boolVectors = initialize(rows, n);

	generateBoolVectors(boolVectors, rows, n);

	print(boolVectors, rows, n);

	deallocateMemory(boolVectors, rows);
}