#include <iostream>

using namespace std;

int main() {
	double centimeters;
	cin >> centimeters;

	double mult = 0.393701;
	double result = centimeters * mult;

	cout << result;
}
