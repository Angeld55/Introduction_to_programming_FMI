#include <iostream>
using namespace std;

int main() {
	int start = 0, end = 0;
	cin >> start >> end;

	for (int i = start; i <= end; i++) {
        
		int sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
				if (sum > i) {
					break;
				}
			}
		}

		if (sum == i) {
			cout << i << endl;
		}
	}
}