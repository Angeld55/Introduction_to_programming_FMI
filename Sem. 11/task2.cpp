#include <iostream>
#pragma warning( disable : 4996)
using namespace std;


double** createMatrix(int n, int m)
{
	double** matrix;
	matrix = new double*[n];
	for (int i = 0; i < n; i++)
		matrix[i] = new double[m];
	return matrix;
}
void freeMatrix(double** matrix, int n, int m)
{
	for (int i = 0; i < n; i++)
		delete[] matrix[i];
	delete[] matrix;
}

void divideBy(double* arr, int size, double value)
{
	for (int i = 0; i < size; i++)
		arr[i] /= value;
}

void substractRows(double* first, double* second, double size, double coef)
{
	for (int i = 0; i < size; i++)
		first[i] -= (second[i] * coef);
}

void makeAllZeros(double** matrix, int n, int row)
{
	for (int i = 0; i < n; i++)
	{
		if (i == row)
			continue;
		substractRows(matrix[i], matrix[row], n + 1, matrix[i][row]);

	}
}

void print(double** matrix, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}
double* solve(double** matrix, int n)
{
	for (int i = 0; i < n; i++)
	{
		divideBy(matrix[i], n + 1, matrix[i][i]);
		makeAllZeros(matrix, n, i);
		//print(matrix, n, n + 1);
	}
	double* result = new double[n];
	for (int i = 0; i < n; i++)
		result[i] = matrix[i][n];
	return result;
}
int main()
{
	int n;
	cin >> n;

	double** matrix = createMatrix(n, n + 1);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n + 1; j++)
			cin >> matrix[i][j];
	}
	//print(matrix, n, n + 1);
	double* result = solve(matrix, n);

	for (int i = 0; i < n; i++)
		cout << result[i] << " ";

	delete[] result;
	freeMatrix(matrix, n, n + 1);
}

