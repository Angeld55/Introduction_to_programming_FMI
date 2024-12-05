#include <iostream>
using namespace std;

void printMatrix(double arr[][3], size_t rows, size_t colls)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colls; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

void divideBy(double arr[], size_t size, double by)
{
	for (int i = 0; i < size; i++)
		arr[i] /= by;
}
void substract(double first[], double second[], double coef, size_t size)
{
	for (int i = 0; i < size; i++)
		first[i] -= (second[i] * coef);
}
void makeAllZeros(double matrix[][3], size_t rows, size_t colls, int currentRow)
{
	for (int i = 0; i < rows; i++)
	{
		if (i != currentRow)
			substract(matrix[i], matrix[currentRow], matrix[i][currentRow], colls);
	}
}

void gauss(double matrix[][3], size_t n, double result[])
{
	size_t rows = n;
	size_t colls = n + 1;

	for (int i = 0; i < rows; i++)
	{
		divideBy(matrix[i], colls, matrix[i][i]);
		makeAllZeros(matrix, rows, colls, i);
	}
	for (int i = 0; i < rows; i++)
		result[i] = matrix[i][colls - 1]; 

}

int main()
{
	constexpr size_t rows = 2;
	constexpr size_t colls = 3;

	double m[rows][colls] = { {2, 6, 40},  // 2x + 6y = 40
                                  {4, 1, 14} };// 4x +  y = 14

	double result[rows];
	gauss(m, rows, result);

	for (int i = 0; i < rows; i++)
		cout << result[i] << " ";

}
