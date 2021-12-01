#include <iostream>
using namespace std;

// tic-tac-toe
// произволна големина на полето.
// произволна дължина на линията.
// произволен брой играчи

const unsigned FIELD_SIZE = 3;
const unsigned LINE_SIZE = 3;
const unsigned PLAYERS_COUNT = 2;

void init(char field[FIELD_SIZE][FIELD_SIZE])
{
	for (unsigned i = 0; i < FIELD_SIZE; i++)
	{
		for (unsigned j = 0; j < FIELD_SIZE; j++)
			field[i][j] = ' ';
	}
}

void print(const char field[FIELD_SIZE][FIELD_SIZE])
{
	for (unsigned i = 0; i < FIELD_SIZE; i++)
	{
		for (unsigned j = 0; j < FIELD_SIZE; j++)
			cout << " [" << field[i][j] <<"] ";
		cout << endl;
	}
}

bool areValidIndices(unsigned playerX, unsigned playerY)
{
	return playerX >= 0 && playerX < FIELD_SIZE&& playerY >= 0 && playerY < FIELD_SIZE;
}

bool isCellFree(const char field[FIELD_SIZE][FIELD_SIZE], unsigned playerX, unsigned playerY)
{
	//допускам, че вече сме минали проверката за валидност на индексите!
	return field[playerX][playerY] == ' ';
}

void userInput(const char field[FIELD_SIZE][FIELD_SIZE], unsigned& playerX, unsigned& playerY)
{
	cin >> playerX >> playerY;
	while (!areValidIndices(playerX, playerY) || !isCellFree(field, playerX, playerY))
	{
		cout << "Error! Invalid input!" << endl;
		cin >> playerX >> playerY;
	}
}

bool containsКConsecutiveChars(const char* arr, unsigned size, char player)
{
	if (size < LINE_SIZE)
		return false;
	//LINE_SIZE
	int count = 0;
	for (unsigned i = 0; i < size; i++)
	{
		if (arr[i] == player)
			count++;
		else
			count = 0;

		if (count == LINE_SIZE)
			return true;
	}
	return false;
}


//cloud be modified: looking for a line including the last marked point.
//Now we are making useless checks of lines
bool isWinner(const char field[FIELD_SIZE][FIELD_SIZE], char player)
{

	//rows
	for (unsigned i = 0; i < FIELD_SIZE; i++)
	{
		if (containsКConsecutiveChars(field[i], FIELD_SIZE, player))
			return true;
	}

	//cols
	for (unsigned i = 0; i < FIELD_SIZE; i++)
	{
		char currentCol[FIELD_SIZE];
		for (unsigned j = 0; j < FIELD_SIZE; j++)
			currentCol[j] = field[i][j];

		if (containsКConsecutiveChars(currentCol, FIELD_SIZE, player))
			return true;
	}


	//diagonals

	//(left -> right)
	for (unsigned i = 0; i < FIELD_SIZE; i++)
	{
		char currentDiag1[FIELD_SIZE];
		unsigned iter1 = 0;

		char currentDiag2[FIELD_SIZE];
		unsigned iter2 = 0;

		for (unsigned row = i, col = 0; row < FIELD_SIZE; row++, col++)
		{
			currentDiag1[iter1++] = field[row][col];
			currentDiag2[iter2++] = field[col][row];
		}

		if (containsКConsecutiveChars(currentDiag1, iter1, player)
		||  containsКConsecutiveChars(currentDiag2, iter2, player))
			return true;
	}

	//(right -> left) (part 1)
	for (unsigned i = 0; i < FIELD_SIZE; i++)
	{
		char currentDiag[FIELD_SIZE];
		unsigned iter = 0;
		for (unsigned row = i, col = FIELD_SIZE - 1; row < FIELD_SIZE; row++, col--)
			currentDiag[iter++] = field[row][col];

		if (containsКConsecutiveChars(currentDiag, iter, player))
			return true;
	}

	//(right -> left) (part 2)

	for (unsigned i = 0; i < FIELD_SIZE; i++)
	{
		char currentDiag[FIELD_SIZE];
		unsigned iter = 0;
		for (int row = 0, col = i; col >= 0; row++, col--)
			currentDiag[iter++] = field[row][col];

		if (containsКConsecutiveChars(currentDiag, iter, player))
			return true;
	}


	return false;
}

int main()
{
	char field[FIELD_SIZE][FIELD_SIZE];
	init(field);

	bool hasWinner = false;
	print(field);

	while (!hasWinner)
	{
		for (char player = '1'; player < '1' + PLAYERS_COUNT; player++)
		{
			unsigned playerX, playerY;
			userInput(field, playerX, playerY);

			field[playerX][playerY] = player;

			system("CLS");
			print(field);

			if (isWinner(field, player))
			{
				cout << "Congrats! Winner: " << player << endl;
				hasWinner = true;
				break;
			}
		}
	}
}
