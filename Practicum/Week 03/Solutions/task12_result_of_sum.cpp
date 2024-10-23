#include <iostream>
using namespace std;

int main() {
	unsigned n, res = 0;
	cin >> n;

	for (unsigned i = 1; i <= n; i++)
		res += (i * (i + 1) / 2);

	cout << res;
}