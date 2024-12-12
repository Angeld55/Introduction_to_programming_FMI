#include <iostream>
using namespace std;

const int MATRIX_SIZE = 3;

bool isMatrixTriangle(const matrix[][MATRIX_SIZE]) {
    
}

int main() {
    int matrix[MATRIX_SIZE][MATRIX_SIZE] = {
        {5, 1, 5},
        {0, 5, 9},
        {0, 6, 7}
    };
    cout << isMatrixTriangle(matrix) << endl;
    int matrix2[MATRIX_SIZE][MATRIX_SIZE] = {
        {5, 1, 5},
        {0, 5, 9},
        {0, 0, 7}
    };
    cout << isMatrixTriangle(matrix) << endl;
}