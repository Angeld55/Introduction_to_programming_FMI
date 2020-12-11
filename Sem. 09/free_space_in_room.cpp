#include <iostream>
using namespace std;

//Задача 2:


//Подадена е булева матрица. (Стая)
// 1- заета клетка
// 0- свободна клетка.
// 11111111
// 11000001
// 11000001
// 11111111

// Подават ни обект(мебел) с размери n и k.
// Трябва да отпечатаме дали има място, където да поставим обекта


// Пример:
// В горния пример има къде да поставим обек 2x2, но няма къде да поставим обект 3x3 



const int ROOM_SIZE_X = 4;
const int ROOM_SIZE_Y = 8;

//Проверява дали има подматрица само със свободни клетки(само с 0-ли) с големина objXDim, objYDim
//където горният ляв ъгъл е на коодриднати upperLeftX и upperLeftY/
bool hasFreeSpaceFromThisLeftUpCorner(bool room[ROOM_SIZE_X][ROOM_SIZE_Y], int objXDim, int objYDim, int upperLeftX, int upperLeftY)
{
	for (int i = 0;  i < objXDim; i++)
	{
		for (int j = 0; j < objYDim; j++)
		{
			if (room[upperLeftX + i][upperLeftY + j] != 0)
				return false;
		}
	}
	return true;
}
bool hasSpace(bool room[ROOM_SIZE_X][ROOM_SIZE_Y], int objXDim, int objYDim)
//дали има подматрица само от 0-ли с размери objXDim x objYDim
{
	for (int i = 0; i < ROOM_SIZE_X - objXDim + 1; i++)
	{
		for (int j = 0; j < ROOM_SIZE_Y - objYDim + 1; j++)
		{
			//i,j - кандидат за горен ляв ъгъл на потенциално свободното пространство 
			if (hasFreeSpaceFromThisLeftUpCorner(room, objXDim, objYDim, i, j))
			{
				//i,j са горен ляв ъгъл на достатъчно голямо свободно място за обект с рамери objXDim objYDim
				
				cout << "Free space found!" <<endl;
				cout << "Corners:" << endl;
				cout << i << " " << j<<endl;
				cout << i + objXDim - 1 << " " << j << endl;
				cout << i + objXDim-1 << " " << j + objYDim-1<<endl;
				cout << i << " " << j + objYDim - 1 << endl;
				return true;
			}
		}
	}
	return false;
}
int main()
{
	bool room[ROOM_SIZE_X][ROOM_SIZE_Y] = { { 1, 1, 1, 1, 1, 1, 1, 1 },
					        { 1, 1, 0, 0, 0, 0, 0, 1 }, 
					        { 1, 1, 0, 0, 0, 0, 0, 1 }, 
						{ 1, 1, 1, 1, 1, 1, 1, 1 } };
	hasSpace(room, 2, 4); //Има ли къде да разположим мебел с размер 2x4
}
