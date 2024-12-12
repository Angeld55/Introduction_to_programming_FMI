#include <iostream>
using namespace std;

const int FIRST_MATRIX_ROWS = 5;
const int FIRST_MATRIX_COLS = 2;

const int SECOND_MATRIX_ROWS = 2;
const int SECOND_MATRIX_COLS = 3;

const int MATRIX_ROWS = FIRST_MATRIX_ROWS;
const int MATRIX_COLS = SECOND_MATRIX_COLS;

bool canMultiply(int firstMatrixCols, int secondMatrixRows) {
    return firstMatrixCols == secondMatrixRows;
}

void multiplyMatrixes(const int matr1[][FIRST_MATRIX_COLS], int matr1Rows, int matr1Cols, 
                      const int matr2[][SECOND_MATRIX_COLS], int matr2Rows, int matr2Cols, 
                      int result[][MATRIX_COLS]) {
    if (!canMultiply(matr1Cols, matr2Rows)) {
        return;
    }

    for (int i = 0; i < FIRST_MATRIX_ROWS; i++) {
        for (int j = 0; j < SECOND_MATRIX_COLS; j++) {
            for (int k = 0; k < FIRST_MATRIX_COLS; k++) {
                result[i][j] += matr1[i][k] * matr2[k][j];
            }
        }
    }
}

void printMatrix(const int matrix[][MATRIX_COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < MATRIX_COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int matr1[FIRST_MATRIX_ROWS][FIRST_MATRIX_COLS] = {
        {1, 2},
        {8, 9},
        {10, 0},
        {1, 0},
        {2, 2}
    };

    int matr2[SECOND_MATRIX_ROWS][SECOND_MATRIX_COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int result[MATRIX_ROWS][MATRIX_COLS] = { 0 };

    multiplyMatrixes(matr1, FIRST_MATRIX_ROWS, FIRST_MATRIX_COLS, matr2, SECOND_MATRIX_ROWS, SECOND_MATRIX_COLS, result);
    printMatrix(result, MATRIX_ROWS);
}
