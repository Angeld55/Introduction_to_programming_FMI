#include <iostream>
using namespace std;

//Зад1: Да се реализира играта tic-tac-toe
// Матрицата ще ни бъде от цели числа. Ще пазим следните стойности:
// [] = 0 (празна клетка)
// [x] = 1 
// [o] = -1
const int TABLE_SIZE = 5;

//Прави матрицата само от 0-ли (от празни клетки)
void init(int table[TABLE_SIZE][TABLE_SIZE])
{
	for (int i = 0; i < TABLE_SIZE; i++)
	{
		for (int j = 0; j < TABLE_SIZE; j++)
		{
			table[i][j] = 0;
		}
	}
}

//Дали не сме извън рамките на масива
bool areValidCoordinates(int x, int y)
{
	return x >= 1 && x <= TABLE_SIZE && y >= 1 && y <= TABLE_SIZE;
}

//Дали клетката е свободна. Тук вече допускаме, че x и y са валидни координати.
bool isCellFree(int table[TABLE_SIZE][TABLE_SIZE], int x, int y)
{
	return table[x][y] == 0;
}

//Проверяваме дали няма вече победител.
//el - кой проверяваме дали е победител (el = 1, значи проверяваме дали имаме последователност от TABLE_SIZE 1-ци.)
bool isWinner(int table[TABLE_SIZE][TABLE_SIZE], int el)
{
	for (int i = 0; i < TABLE_SIZE; i++)
	{
		 //Проверка за редовете
		bool isWinner = true;
		for (int j = 0; j < TABLE_SIZE; j++)
		{
			if (table[i][j] != el)
				isWinner = false;
		}
		if (isWinner)
			return true;

		//Проверка за колоните
		isWinner = true;
		for (int j = 0; j < TABLE_SIZE; j++)
		{
			if (table[i][j] != el)
				isWinner = false;
		}
		if (isWinner)
			return true;
	}
  
 	 //Проверка за главния диагонал
	bool isWinner = true;
	for (int i = 0; i < TABLE_SIZE; i++)
	{
		if (table[i][i] != el)
			isWinner = false;
	}
	if (isWinner)
		return true;

  	//Проверка за второстепенния диагонал
  	isWinner = true;
	for (int i = 0; i < TABLE_SIZE; i++)
	{
		if (table[i][TABLE_SIZE - 1 - i] != el)
			isWinner = false;
	}
	return isWinner;
}
void print(int table[TABLE_SIZE][TABLE_SIZE])
{
	for (int i = 0; i < TABLE_SIZE; i++)
	{
		for (int j = 0; j < TABLE_SIZE; j++)
		{
			cout << "[";
			if (table[i][j] == -1)
				cout << "o";
			else if (table[i][j] == 0)
				cout << " ";
			else
				cout << "x";
			cout << "]";
		}
		cout << endl;
	}
	cout << endl;
}
int main()
{
	int table[TABLE_SIZE][TABLE_SIZE];
	init(table);

	bool isFirstPlayersTurn = true;
	print(table);
	while (true)
	{
   		 cout << "It's player " <<  (isFirstPlayersTurn ? 1 : 2) << "\'s turn!"<<endl;
		int x, y;
		do
		{
			cin >> x >> y;
		} while (!areValidCoordinates(x, y) || !isCellFree(table, x-1,y-1));
    		// Първо проверяваме дали x и y са валидни индекси и САМО АКО СА, проверяваме дали клетката е свободна. 
    		// Възползваме се, че при A || B, ако A е истина, не проверява стойността на B.
    
		int currentSymbol = isFirstPlayersTurn ? 1 : -1;
		table[x - 1][y - 1] = currentSymbol;

		system("CLS");
		print(table);
		if (isWinner(table,currentSymbol))
		{
			cout << "End game!";
			break;
		}
		isFirstPlayersTurn = !isFirstPlayersTurn;
	}
}
