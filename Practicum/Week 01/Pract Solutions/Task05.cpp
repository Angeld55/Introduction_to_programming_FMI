#include <iostream>

using namespace std;

int main() {
	int grade;
	cin >> grade;

	bool isValidGrade = ((grade >= 2) && (grade <= 6));

	cout << isValidGrade;
}
