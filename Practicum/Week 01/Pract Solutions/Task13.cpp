#include <iostream>

using namespace std;

int main() { 
	char a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	int sumOfASCII = a + b + c + d + e + f;
	bool canDivByThree = (sumOfASCII % 3 == 0);

	cout << canDivByThree;
}
