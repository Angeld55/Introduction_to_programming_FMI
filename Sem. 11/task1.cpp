#include "pch.h"
#include <iostream>
#pragma warning( disable : 4996)
using namespace std;

const int SIZE = 10;
void init(char* playersNamesArr[])
{
	for (int i = 0; i < SIZE; i++)
		playersNamesArr[i] = nullptr;
}


void getPlayersNames(char* playersNamesArr[SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		char buff[1024];
		cin.getline(buff, 1024);

		playersNamesArr[i] = new char[strlen(buff) + 1];
		strcpy(playersNamesArr[i], buff);

	}
}

void freePlayers(char* playersNamesArr[], int n)
{
	for (int i = 0; i < n; i++)
		delete[] playersNamesArr[i];
}

void print(char* playersNamesArr[], const int* scores, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << playersNamesArr[i] << " " << scores[i] << endl;
	}
}

int getIndexOfPlayer(const char* playerName, char* arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(playerName, arr[i]) == 0)
			return i;
	}
	return -1;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap(char*& firstName, char*& secondName)
{
	char* temp = firstName;
	firstName = secondName;
	secondName = temp;
}
void goToCorrectPosition(char* playersNamesArr[], int* scores, int playerInd)
{
	while (playerInd > 0 && scores[playerInd] > scores[playerInd - 1])
	{
		swap(scores[playerInd], scores[playerInd - 1]);
		swap(playersNamesArr[playerInd], playersNamesArr[playerInd - 1]);
	}
}

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	char* playersNamesArr[SIZE];
	int scores[SIZE] = { 0 };

	getPlayersNames(playersNamesArr, n);
	print(playersNamesArr, scores, n);


	while (1)
	{
		char name[1024];
		cin.getline(name, 1024);

		if (strcmp(name, "") == 0)
			break;

		int points;
		cin >> points;
		cin.ignore();

		int ind = getIndexOfPlayer(name, playersNamesArr, n);
		if (ind == -1)
		{
			cout << "No such player!" << endl;
			continue;
		}
		scores[ind] += points;
		goToCorrectPosition(playersNamesArr, scores, ind);
		print(playersNamesArr, scores, n);

	}

	freePlayers(playersNamesArr, n);

}

