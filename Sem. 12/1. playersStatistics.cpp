#include <iostream>
using namespace std;

//each rows have two "system" variables.
//[0] is the count of the elements in the row
//[1] is the sum of the elements of the row 
int** createMatrix(int rows)
{
	int** mtx = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		int colls;
		cin >> colls;

		mtx[i] = new int[colls + 2]{0}; 
		mtx[i][0] = colls;
	}
	return mtx;
} 

void freeMatrix(int** matrix, int rows)
{
	for (int i = 0; i < rows; i++)
		delete[] matrix[i];
	delete[] matrix;
}

void print(int** mtx, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		int sizeOfRow = mtx[i][0];
		for (int j = 2; j < sizeOfRow + 2; j++)
			cout << mtx[i][j] << ' ';
		cout << endl;
	}
}

void swap(int*& first, int*& second)
{
	int* temp = first;
	first = second;
	second = temp;
}

void moveTheRowToTheCorrectPosition(int** mtx, int lastModifedRow)
{
	int current = lastModifedRow;

	while (current > 0 && mtx[current][1] > mtx[current - 1][1])
	{
		swap(mtx[current], mtx[current - 1]);
		current--;
	}
}

void addPoints(int** mtx, int row, int coll, int point)
{
	mtx[row][coll + 2] += point;
	mtx[row][1] += point;
	moveTheRowToTheCorrectPosition(mtx, row);
 }

int main()  
{
	int rows;
	cin >> rows;

	int** mtx = createMatrix(rows);

	print(mtx, rows);

	int queriesCount;
	cin >> queriesCount;

	for (int i = 0; i < queriesCount; i++)
	{
		int row, coll, points;
		cin >> row >> coll >> points;
		addPoints(mtx, row, coll, points);
		print(mtx, rows);
	}

	print(mtx, rows);

	freeMatrix(mtx, rows);
}
