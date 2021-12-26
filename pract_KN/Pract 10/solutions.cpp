#include<iostream>
#include<thread>
#include<chrono>

const int N = 30;		//game of life grid
const int RFIRST = 4;	//rows first
const int RSEC = 4;		//rows second
const int CFIRST = 4;	//cols first
const int CSEC = 4;		//cols second
const int DIM = 4;		//used for three dimentional array
//First->
void plusFive(int* a) {
	*a += 10;
}

//Second-> 
void iterateOverMatrix(int matrix[RFIRST][CFIRST]) {
	for (int i = 0; i < RFIRST; i++)
		for (int j = 0; j < CFIRST; j++)
			*(*(matrix + i) + j) = rand() % 100 + 1;
}

//Third->
void iterateOverThreeDimentionalArray(int matrix[DIM][DIM][DIM]) {
	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) {
			for (int k = 0; k < DIM; k++) {
				*(*(*(matrix + i) + j) + k) = rand() % 100 + 1;
			}
		}
	}
}

//Fourth ->
//Assume that we have correct first and second matrix
void sumMatrices(const int first[RFIRST][RSEC], const int second[CFIRST][CSEC], int result[RFIRST][CSEC]) {
	for (int i = 0; i < RFIRST; i++) {
		for (int j = 0; j < CFIRST; j++) {
			result[i][j] = first[i][j] + second[i][j];
		}
	}
}

//Fifth ->
void multiplyMatrices(const int first[RFIRST][CFIRST], const int second[RSEC][CSEC], int result[RFIRST][CSEC]) {
	for (int i = 0; i < RFIRST; i++) {
		for (int j = 0; j < CSEC; j++) {
			for (int k = 0; k < RSEC; k++) {
				result[i][j] += first[i][k] * second[k][j];
			}
		}
	}
}

//Sixth ->
void evolveCell(const int matrix[N][N], int matrixCopy[N][N], int i, int j) {
	int cnt = -matrix[i][j];					//because we add matrix [i][j] as well

	bool iStartingPosAtZero = (i == 0);			//Fix start point corner case for (i == 0)
	bool jStartingPosAtZero = (j == 0);			//Fix start point corner case for (j == 0)
	bool iEndingPosAtLimit = (i == N - 1);		//Fix end point corner case   for (i == N-1)
	bool jEndingPosAtLimit = (j == N - 1);		//Fix end point corner case   for (j == N-1) 

	//Iterate among the neighbours:
	for (int x = -1 + iStartingPosAtZero; x < 2 - iEndingPosAtLimit; x++)
		for (int y = -1 + jStartingPosAtZero; y < 2 - jEndingPosAtLimit; y++)
			cnt += matrix[i + x][j + y];

	//evolve:
	if (matrix[i][j] && cnt != 2 && cnt != 3) {
		matrixCopy[i][j] = 0;
	}
	else if (!matrix[i][j] && cnt == 3) {
		matrixCopy[i][j] = 1;
	}
	else {
		matrixCopy[i][j] = matrix[i][j];
	}
}

void evolve(int matrix[N][N]) {
	int copyMatrix[N][N] = { 0 };
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			evolveCell(matrix, copyMatrix, i, j);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			matrix[i][j] = copyMatrix[i][j];
}

void printMatrix(const int matrix[N][N]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			std::cout.width(2);
			if (matrix[i][j])
				std::cout << "*" << " ";
			else
				std::cout << " " << " ";
		}
		std::cout << std::endl;
	}
}

void start(int matrix[N][N]) {
	//moving pattern:
	//matrix[1][1] = 1;
	//matrix[2][2] = 1;
	//matrix[3][0] = 1;
	//matrix[3][1] = 1;
	//matrix[3][2] = 1;

	//flipping ones:
	//matrix[2][1] = matrix[2][2] = matrix[2][3] = 1;

	//pattern:
	/*matrix[10][10] = matrix[10][14] = 1;
	matrix[11][12] = 1;
	matrix[12][11] = matrix[12][13] = 1;
	matrix[13][12] = 1;
	matrix[14][10] = matrix[14][14] = 1;*/


	//random pattern:
	/*matrix[10][10] = matrix[10][14] = 1;
	matrix[11][12] = 1;
	matrix[12][11] = matrix[12][13] = 1;
	matrix[13][13] = 1;
	matrix[14][10] = matrix[14][14] = 1;*/
}

void gameOfLife() {
	int matrix[N][N] = { 0 };
	start(matrix); //-> Remove comments on the patterd you'd like to run, or make one yourself!
	while (true) {
		system("cls");
		printMatrix(matrix);
		evolve(matrix);
		std::this_thread::sleep_for(std::chrono::milliseconds(300)); //Making the terminal sleep for 300 mseconds
	}
}

void testsOnFirst() {
	int a = 5;
	plusFive(&a);
	std::cout << a;
}

void testsOnSecond() {
	int matrix[RFIRST][CFIRST] = { 0 };
	iterateOverMatrix(matrix);
	for (int i = 0; i < RFIRST; i++) {
		for (int j = 0; j < RSEC; j++)
			std::cout << matrix[i][j] << " ";
		std::cout << std::endl;
	}
}

void testsOnThird() {
	int matrix3d[DIM][DIM][DIM] = { 0 };
	iterateOverThreeDimentionalArray(matrix3d);
	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) {
			for (int k = 0; k < DIM; k++)
				std::cout << matrix3d[i][j][k] << " ";
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
}

void testsOnFourth() {
	int firstMatrix[RFIRST][CSEC] = { {1, 2, 3, 0}, {4, 5, 6, 1}, {7, 8, 9, 2}, {7, 6, 39, 5} };
	int secondMatrix[RFIRST][CSEC] = { {10, 11, 12, 1}, {13, 14, 15, 3}, {0, 21, 22, 23}, {7, 8, 9, 2} };
	int result[RFIRST][CFIRST] = { 0 };
	sumMatrices(firstMatrix, secondMatrix, result);
	multiplyMatrices(firstMatrix, secondMatrix, result);
	for (int i = 0; i < RFIRST; i++) {
		for (int j = 0; j < CFIRST; j++)
			std::cout << result[i][j] << " ";
		std::cout << std::endl;
	}
}

int main() {
	//testsOnFirst();
	//testsOnSecond();
	//testsOnThird();
	//testsOnFourth();
	//gameOfLife();
}