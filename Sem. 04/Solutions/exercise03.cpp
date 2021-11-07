#include <iostream>
#include <cmath>

using namespace std;

// Taken from exercise02.cpp
double distanceBetweenPoints(int x1, int y1, int x2, int y2)
{
	int sideA = x1 - x2, sideB = y1 - y2;
	return sqrt(sideA * sideA + sideB * sideB); // Pythagorean theorem
}

double trianglePerimeterFromPoints(int x1, int y1, int x2, int y2, int x3, int y3)
{
	return distanceBetweenPoints(x1, y1, x2, y2) +
		   distanceBetweenPoints(x1, y1, x3, y3) +
		   distanceBetweenPoints(x2, y2, x3, y3);
}

int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	cout << trianglePerimeterFromPoints(x1, y1, x2, y2, x3, y3) << endl;
}
