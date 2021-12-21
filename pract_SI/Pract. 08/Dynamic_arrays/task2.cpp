#include <iostream>
using namespace std;

int** createMatrix(size_t rows, size_t columns)
{
	int **matrix = new int*[rows]; //Step 1

	for (size_t i = 0; i < rows; i++) //step2
		matrix[i] = new int[columns];

	for (size_t i = 0; i < rows; i++)
		for (size_t y = 0; y < columns; y++)
			matrix[i][y] = NULL; //default initialization 

	return matrix;
}

void initialize(int **matrix, size_t rows, size_t columns)
{
	for (size_t i = 0; i < rows; i++)
		for (size_t y = 0; y < columns; y++)
			cin >> matrix[i][y];
}
void print(int **matrix, size_t rows, size_t columns)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t y = 0; y < columns; y++)
		{
			cout << matrix[i][y] << " ";
		}
		cout << endl;
	}
}
void free(int **matrix, size_t rows)
{
	for (size_t i = 0; i < rows; i++)
		delete[] matrix[i];

	delete[] matrix;
}