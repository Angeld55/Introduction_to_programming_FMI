#include <iostream>
using namespace std;

bool checkIfPathExists(const int* field, bool* visited, int len, int pos)
{
	if (pos < 0 || pos >= len || visited[pos]) //out of bounds
		return false;
	if (pos == len - 1)
		return true;

	visited[pos] = true;

	int value = field[pos];

	return checkIfPathExists(field, visited, len, pos - value) || checkIfPathExists(field, visited, len, pos + value);

}

int main()
{
	int n;
	cin >> n; //големината на масива.
	int* field = new int[n];
	bool* visited = new bool[n];

	for (int i = 0; i < n; i++)
	{
		cin >> field[i];
		visited[i] = false;
	}
	
	cout << checkIfPathExists(field, visited, n, 0);

	delete[] field, visited;
}
