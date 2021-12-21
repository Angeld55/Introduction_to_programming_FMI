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

int** multiplyMatrix(int **A,size_t a_rows,size_t a_col, int **B,size_t b_rows,size_t b_col) //A && B are matrixes
{
	int** multiply = createMatrix(a_rows, b_col); //a_rows x b_col -> all Zero's

	for (size_t i = 0; i < a_rows; i++)
		for (size_t y = 0; y < b_col; y++)
			for (size_t k = 0; k < a_rows; k++)
				multiply[i][y] += A[i][k] * B[k][i];

	return multiply;
}