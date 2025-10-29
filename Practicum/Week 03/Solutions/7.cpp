#include <iostream>
using namespace std;

int main() {
    int n = 0;
	cin>> n;

	if (n == 0) {
		cout << "False";
	}
	else {
		int copyOfN = n;
		while (copyOfN %2 == 0) {
			copyOfN /= 2;
		}
		
		if (copyOfN == 1) {
			cout << "True";
		}
		else {
			cout << "False";
		}
	}
}