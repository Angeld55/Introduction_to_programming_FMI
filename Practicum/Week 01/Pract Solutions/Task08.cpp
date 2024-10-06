#include <iostream>

using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;

	int expr1 = num1 + num2;
	int expr2 = num1 - num2;

	int res = (expr1 * expr1 * expr1 * expr1) - (expr2 * expr2);

	cout << res;
}
