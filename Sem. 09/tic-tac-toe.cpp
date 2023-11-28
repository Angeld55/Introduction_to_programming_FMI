#include <iostream>
using namespace std;

const size_t N = 3;
const unsigned PLAYERS_COUNT = 2;
const unsigned LINE_LENGHT = 3;
const char EMPTY_CELL = ' ';

void init(char field[][N], char ch)
{
	for (unsigned i = 0; i < N; i++)
	{
		for (unsigned j = 0; j < N; j++)
			field[i][j] = ch;
	}
}
void printField(const char field[][N])
{
	for (unsigned i = 0; i < N; i++)
	{
		for (unsigned j = 0; j < N; j++)
			cout << "[" << field[i][j] << "]";
		cout << endl;
	}
}
bool isValidIndex(int x, int y)
{
	return x >= 0 && y >= 0 && x < N && y < N;
}

void input(int& x, int& y, char field[N][N])
{
	cin >> x >> y;

	while(!isValidIndex(x,y) || field[x][y] != EMPTY_CELL)
		cin >> x >> y;
}
void makeMove(char field[N][N], int x, int y, char player)
{
	field[x][y] = player;
}

int lineLength(char field[N][N], int row, int coll, int rowMove, int collMove)
{
	char currentPlayerSymbol = field[row][coll];
	int currentRow = row + rowMove;
	int currentColl = coll + collMove;

	int result = 0;
	while (isValidIndex(currentRow, currentColl) && field[currentRow][currentColl] == currentPlayerSymbol)
	{
		result++;
		currentRow = currentRow + rowMove;
		currentColl = currentColl + collMove;
	}

	currentRow = row - rowMove;
	currentColl = coll - collMove;
	while (isValidIndex(currentRow, currentColl) && field[currentRow][currentColl] == currentPlayerSymbol)
	{
		result++;
		currentRow = currentRow - rowMove;
		currentColl = currentColl - collMove;
	}
	return result + 1;

}
bool isWinner(char field[N][N], int x, int y)
{
	return  lineLength(field, x, y, 0, 1) >= LINE_LENGHT ||
			lineLength(field, x, y, 1, 0) >= LINE_LENGHT ||
			lineLength(field, x, y, 1, 1) >= LINE_LENGHT ||
			lineLength(field, x, y, -1, 1) >= LINE_LENGHT;
}
int main()
{
	char field[N][N];
	init(field, EMPTY_CELL);
	printField(field);
	
	bool winner = false;
	unsigned playerIndex = 0;
	while (!winner)
	{
		int x, y;
		input(x, y, field);
		makeMove(field, x, y, 'A' + playerIndex);
		printField(field);
		winner = isWinner(field, x, y);
		(++playerIndex) %= PLAYERS_COUNT;
	}
	std::cout << "Winner!" << std::endl;
}
