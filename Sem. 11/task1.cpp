#include "pch.h"
#include <iostream>
#pragma warning( disable : 4996)
using namespace std;

const int SIZE = 10;
void init(char* arr[])
{
	for (int i = 0; i < SIZE; i++)
		arr[i] = nullptr;
}


void getPlayers(char* arr[SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		char buff[1024];
		cin.getline(buff, 1024);

		arr[i] = new char[strlen(buff) + 1];
		strcpy(arr[i], buff);

	}
}

void freePlayers(char* arr[], int n)
{
	for (int i = 0; i < n; i++)
		delete[] arr[i];
}

void print(char* arr[], const int* scores, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " " << scores[i] << endl;
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
void goToCorrectPosition(char* arr[], int* scores, int playerInd)
{
	while (playerInd > 0 && scores[playerInd] > scores[playerInd - 1])
	{
		swap(scores[playerInd], scores[playerInd - 1]);
		swap(arr[playerInd], arr[playerInd - 1]);
	}
}

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	char* arr[SIZE];
	int scores[SIZE] = { 0 };

	getPlayers(arr, n);
	print(arr, scores, n);


	while (1)
	{
		char name[1024];
		cin.getline(name, 1024);

		if (strcmp(name, "") == 0)
			break;

		int points;
		cin >> points;
		cin.ignore();

		int ind = getIndexOfPlayer(name, arr, n);
		if (ind == -1)
		{
			cout << "No such player!" << endl;
			continue;
		}
		scores[ind] += points;
		goToCorrectPosition(arr, scores, ind);
		print(arr, scores, n);

	}

	freePlayers(arr, n);

}

