#include <iostream>
using namespace std;

const int MATRIX_ROWS_SIZE = 4;
const int MATRIX_COLS_SIZE = 4;

int sumOfLeftDiagonal(const int matrix[][MATRIX_COLS_SIZE]) {
    int sum = 0;
    for (int i = 0; i < MATRIX_ROWS_SIZE; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int sumOfRightDiagonal(const int matrix[][MATRIX_COLS_SIZE]) {
    int sum = 0;
    for (int i = 0; i < MATRIX_ROWS_SIZE; i++) {
        sum += matrix[i][MATRIX_ROWS_SIZE - 1 - i];
    }
    return sum;
}

int sumOfRow(const int row[]) {
    int sum = 0;
    for (int i = 0; i < MATRIX_COLS_SIZE; i++) {
        sum += row[i];
    }
    return sum;
}

int sumOfCol(const int matrix[][MATRIX_COLS_SIZE], int col) {
    int sum = 0;
    for (int i = 0; i < MATRIX_COLS_SIZE; i++) {
        sum += matrix[i][col];
    }
    return sum;
}

bool isMagicSquare(const int matrix[][MATRIX_COLS_SIZE]) {
    int leftDiag = sumOfLeftDiagonal(matrix);
    int rightDiag = sumOfRightDiagonal(matrix);

    if (leftDiag != rightDiag) {
        return false;
    }

    for (int i = 0; i < MATRIX_ROWS_SIZE; i++) {
        if (sumOfRow(matrix[i]) != leftDiag) {
            return false;
        }
    }

    for (int i = 0; i < MATRIX_ROWS_SIZE; i++) {
        if (sumOfCol(matrix, i) != leftDiag) {
            return false;
        }
    }

    return true;
}

int main() {
    int matrix[MATRIX_ROWS_SIZE][MATRIX_COLS_SIZE] = {
        {16, 3, 2, 13},
        {5, 10, 11, 8},
        {9, 6, 7, 12},
        {4, 15, 14, 1}
    };

    cout << isMagicSquare(matrix);
}