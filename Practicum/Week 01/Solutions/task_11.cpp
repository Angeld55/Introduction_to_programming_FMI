#include <iostream>

using namespace std;

int main() { 
	int num;
	cin >> num;

	bool hasTwoDigits = (num < 10 || 99 < num) && (num %= 10);
	cout << num;
}
