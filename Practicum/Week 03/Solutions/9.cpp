#include <iostream>
using namespace std;

int main() {
    int n = 0;
	cin >> n;

	if (n % 2 == 0 || n <= 0) {
		cout << "Enter natural number: ";
	}

	else {
		int half = n / 2;

		for (int i = 0; i <= half; i++) {

			for (int j = 0; j < i; j++)	{	
				cout << " ";		
			}

			for (int k = i; k < n - i; k++) {
				cout << "*";
			}

			cout << endl;
		}

		for (int i = half - 1; i >= 0; i--) {
			
			for (int j = 0; j < i; j++) {
				cout << " ";
			}

			for (int k = i; k < n - i; k++) {
				cout << "*";
			}

			cout << endl;
		}
	}
}