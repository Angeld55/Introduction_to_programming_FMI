#include <iostream>
using namespace std;

const int MATRIX_ROWS = 2;
const int MATRIX_COLS = 3;

void sumOfTwoMatrixes(const int first[][MATRIX_COLS], int rowsFirst, int colsFirst, const int second[][MATRIX_COLS], int rowsSecond, int colsSecond, int result[][MATRIX_COLS]) {
    if (rowsFirst != rowsSecond || colsFirst != colsSecond) {
        return;
    }

    for (int i = 0; i < rowsFirst; i++) {
        for (int j = 0; j < colsFirst; j++) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
}

void multByN(int matrix[][MATRIX_COLS], int rows, int n) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < MATRIX_COLS; j++) {
            matrix[i][j] *= n;
        }
    }
}

void printMatrix(const int matr[][MATRIX_COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < MATRIX_COLS; j++) {
            cout << matr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int matr1[MATRIX_ROWS][MATRIX_COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matr2[MATRIX_ROWS][MATRIX_COLS] = {
        {5, 6, 7},
        {8, 9, 10}
    };

    int res[MATRIX_ROWS][MATRIX_COLS];

    sumOfTwoMatrixes(matr1, MATRIX_ROWS, MATRIX_COLS, matr2, MATRIX_ROWS, MATRIX_COLS, res);
    printMatrix(res, MATRIX_ROWS);
    
    int mult;
    cin >> mult;
    multByN(matr1, MATRIX_ROWS, mult);
    printMatrix(matr1, MATRIX_ROWS);
}