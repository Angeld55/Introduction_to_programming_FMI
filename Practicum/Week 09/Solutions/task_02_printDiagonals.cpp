#include <iostream>
using namespace std;

const int MATRIX_SIZE = 3;

void printLeftDiagonal(const int matrix[][MATRIX_SIZE]) {
    for (int i = 0; i < MATRIX_SIZE; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;
}

void printRightDiagonal(const int matrix[][MATRIX_SIZE]) {
    for (int i = 0; i < MATRIX_SIZE; i++) {
        cout << matrix[i][MATRIX_SIZE - 1 - i] << " ";
    }
    cout << endl;
}

int main() {
    int matrix[MATRIX_SIZE][MATRIX_SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printLeftDiagonal(matrix);
    printRightDiagonal(matrix);
}