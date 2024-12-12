#include <iostream>
using namespace std;

const int MATRIX_ROWS = 3;
const int MATRIX_COLS = 3;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void transposeMatrix(const int original[][MAX_COLS], int transposed[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = original[i][j];
        }
    }
}

void printMatrix(const int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int matr[MAX_COLS][MAX_COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int result[MAX_COLS][MAX_COLS] = { 0 };
    transposeMatrix(matr, result, MATRIX_ROWS, MATRIX_COLS);
    printMatrix(result, MATRIX_COLS, MATRIX_ROWS);
}