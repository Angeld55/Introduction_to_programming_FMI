#include <iostream>
using namespace std;

int main() {
   	int a = 0, b = 0;
	cin >> a >> b;

	int min = a > b ? b : a;

	for (int i = min; i > 0; i--) {
		if (b % i == 0 && a % i == 0) {
			cout << i << " ";
		}
	}
}