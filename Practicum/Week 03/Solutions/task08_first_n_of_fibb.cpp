#include <iostream>
using namespace std;

int main() {
	unsigned n, first = 0, second = 1;
	cin >> n;

	if (n > 0)
		cout << first << " ";

	if (n > 1)
		cout << second << " ";

	for (int i = 3; i <= n; i++) {
		unsigned next = first + second;
		first = second;
		second = next;
		cout << next << " ";
	}

}