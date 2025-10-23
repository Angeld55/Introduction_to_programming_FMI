#include <iostream>

using namespace std;

int main() { 
	int a, b, c, d;

	// Тук разчитаме, че входните данни са валидни интервали, т.е. нямаме интервал от вида [10, 5]
	cin >> a >> b >> c >> d;

	bool intersect = (a < c && c < b) || (a < d && d < b);
	cout << intersect;
}
