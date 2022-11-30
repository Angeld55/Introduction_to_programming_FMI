#include <iostream>
using namespace std;

const int N = 5;
const int PLAYERS_COUNT = 2;
const int LINE_LENGHT = 3;

void init(char field[N][N], char value)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			field[i][j] = value;
	}
}
void print(char field[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << "[" << field[i][j] << "]";
		cout << endl;
	}
}

bool isValid(int x, int y)
{
	return x >= 0 && y >= 0 && x < N && y < N;
}
bool isFree(char field[N][N], int x, int y)
{
	return field[x][y] == ' ';
}
void userInput(char field[N][N], int& x, int& y)
{
	cin >> x >> y;
	while (!isValid(x, y) || !isFree(field, x, y))
		cin >> x >> y;
}

bool containsKconsecutive(const char* arr, size_t len, char ch, int k)
{
	size_t currentConsecutiveChCount = 0;
	for (size_t i = 0; i < len; i++)
	{
		if (arr[i] == ch)
		{
			currentConsecutiveChCount++;
			if (currentConsecutiveChCount == k)
				return true;
		}
		else
			currentConsecutiveChCount = 0;
	}
	return false;
}

bool isWinner(char field[N][N], int lastPlayedRow, int lastPlayedColumn, char playerSymbol)
{
	{ //column
		char column[N];
		for (int i = 0; i < N; i++)
		{
			column[i] = field[i][lastPlayedColumn];
		}

		if (containsKconsecutive(column, N, playerSymbol, LINE_LENGHT))
			return true;
	}

	{ //row
		if (containsKconsecutive(field[lastPlayedRow], N, playerSymbol, LINE_LENGHT))
			return true;
	}

	
}

int main()
{
	char field[N][N];
	init(field, ' ');
	print(field);

	int player = 0;
	while (true)
	{
		char currentSymbol = 'A' + player;
		int x, y;
		userInput(field, x, y);
		field[x][y] = currentSymbol;

		if (isWinner(field, x, y, currentSymbol))
			break;
		(++player) %= PLAYERS_COUNT;
		print(field);
	}

}
