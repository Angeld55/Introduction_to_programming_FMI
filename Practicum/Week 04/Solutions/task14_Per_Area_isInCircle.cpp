#include <iostream>
using namespace std;

bool isTriangleValid(unsigned a, unsigned b, unsigned c) {
	return ((a + b > c) && (a + c > b) && (b + c > a));
}

unsigned getDist(int x1, int y1, int x2, int y2) {
	return sqrt((x1 * x2) + (y1 * y2));
}

unsigned perimeter(int x1, int y1, int x2, int y2, int x3, int y3) {
	unsigned side1 = getDist(x1, y1, x2, y2);
	unsigned side2 = getDist(x1, y1, x3, y3);
	unsigned side3 = getDist(x2, y2, x3, y3);

	if (isTriangleValid(side1, side2, side3))
		return (getDist(x1, y1, x2, y2) + getDist(x1, y1, x3, y3) + getDist(x2, y2, x3, y3));

	return 0;
}

unsigned getArea(int x1, int y1, int x2, int y2, int x3, int y3) {
	unsigned side1 = getDist(x1, y1, x2, y2);
	unsigned side2 = getDist(x1, y1, x3, y3);
	unsigned side3 = getDist(x2, y2, x3, y3);

	if (isTriangleValid(side1, side2, side3))
	{
		double p = (side1 + side2 + side3) / 2;
		return sqrt(p * (p - side1) * (p - side2) * (p - side3));
	}

	return 0;
}

bool isInCircleWithRadius(int x1, int y1, int x2, int y2, int x3, int y3, unsigned r) {
	unsigned side1 = getDist(x1, y1, x2, y2);
	unsigned side2 = getDist(x1, y1, x3, y3);
	unsigned side3 = getDist(x2, y2, x3, y3);

	if (!isTriangleValid(side1, side2, side3))
		return false;

	return ((getDist(x1, y1, 0, 0) <= r) && (getDist(x2, y2, 0, 0) <= r) && (getDist(x3, y3, 0, 0) <= r));
}

int main() {
    
}