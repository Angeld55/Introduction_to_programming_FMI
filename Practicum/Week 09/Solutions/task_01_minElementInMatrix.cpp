#include <iostream>
using namespace std;

const int MATRIX_SIZE = 3;

int findMinElementInMatrix(const int matrix[][MATRIX_SIZE]) {
    int minEl = INT_MAX;
    for(int i = 0; i < MATRIX_SIZE; i++) {
        for(int j = 0; j < MATRIX_SIZE; j++) {
            if(matrix[i][j] < minEl) {
                minEl = matrix[i][j];
            }
        }
    }
    return minEl;
}

int main() {
    int matrix[MATRIX_SIZE][MATRIX_SIZE] = {
        {3, 5, 1}, 
        {6, 2, 4},
        {9, 0, 8}
    };
    cout << findMinElementInMatrix(matrix) << endl;
}