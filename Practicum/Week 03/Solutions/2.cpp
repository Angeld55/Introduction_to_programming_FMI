#include <iostream>
using namespace std;

int main() {
   	int a = 0, b = 0;
	cin >> a >> b;

	if (b > a) {
		int temp = a;
		a = b;
		b = temp;
	}
	while (b != 0) {
		int mod = a % b;
		a = b;
		b = mod;
	}
	cout << a << endl;
}