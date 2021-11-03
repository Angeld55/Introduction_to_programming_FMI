#include <iostream>
#include <cmath>

using namespace std;

double distanceBetweenPoints(int x1, int y1, int x2, int y2)
{
	int sideA = abs(x1 - x2), sideB = abs(y1 - y2);
	return sqrt(sideA * sideA + sideB * sideB); // Pythagorean theorem
}

int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	cout << distanceBetweenPoints(x1, y1, x2, y2) << endl;
}
