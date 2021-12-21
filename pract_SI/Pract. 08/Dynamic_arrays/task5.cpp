#include <iostream>
using namespace std;

int** createMatrix(size_t size)
{
	int **matrix = new int*[size];

	for (size_t i = 0; i < size; i++)
		matrix[i] = new int[size];

	for (size_t i = 0; i < size; i++)
		for (size_t y = 0; y < size; y++)
			cin >> matrix[i][y];

	return matrix;
}

int sumAboveMainDiagonal(int **matrix, size_t size)
{
	int sum = 0;
	for (size_t i = 0; i < size - 1; i++)
		for (size_t j = i + 1; j < size; j++)
			sum += matrix[i][j];

	return sum;
}

/*
int sumOfMainDiagonal(int **matrix, size_t size)
{
	int sum = 0;
	for (size_t i = 0; i < size; i++)
		sum += matrix[i][i];

	return sum;
}
*/