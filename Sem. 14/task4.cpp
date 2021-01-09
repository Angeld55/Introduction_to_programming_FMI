#include <iostream>
using namespace std;

bool checkIfContainsFirstNEvenNumbers(const unsigned* arr, bool* visited, int len, int n)
{
	if (len == 0)
		return true; //all values in visited should be true

	int currentNumber = arr[0];
	if (currentNumber % 2 != 0 || currentNumber > 2 * n - 2 || visited[currentNumber / 2])
		return false;

	visited[currentNumber / 2] = true;

	return checkIfContainsFirstNEvenNumbers(arr + 1, visited, len - 1, n);

}
int main()
{
	int n;
	cin >> n;
	unsigned* arr = new unsigned[n];
	bool* visited = new bool[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		visited[i] = false;
	}

	cout << checkIfContainsFirstNEvenNumbers(arr, visited, n, n);
	delete[] arr, visited;
}