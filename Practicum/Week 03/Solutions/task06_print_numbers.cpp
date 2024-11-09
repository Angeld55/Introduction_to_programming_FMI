#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int nMultByM = n * m;
	for (int i = 1; i <= nMultByM; i++) {
		cout << i << " ";
		
		if (i % n == 0) {
			cout << endl;
		}
	}
}
