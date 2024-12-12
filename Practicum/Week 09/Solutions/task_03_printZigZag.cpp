#include <iostream>
using namespace std;

const int MATRIX_ROWS_SIZE = 3;
const int MATRIX_COLS_SIZE = 3;

void printZigZad(const int matrix[][MATRIX_COLS_SIZE]) {
    for(int i = 0; i < MATRIX_ROWS_SIZE; i++) {
        if (i % 2 == 0) {
            for(int j = 0; j < MATRIX_COLS_SIZE; j++) {
                cout << matrix[i][j] << " ";
            }
        }
        else {
            for(int j = MATRIX_COLS_SIZE - 1; j >= 0; j--) {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int matrix[MATRIX_ROWS_SIZE][MATRIX_COLS_SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printZigZad(matrix);
}