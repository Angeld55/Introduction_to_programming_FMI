#include <iostream>
using namespace std;

int main()
{
	int radius = 0, x = 0, y = 0;
	cin >> radius >> x >> y;

	int distanceFromCentreSquared = x * x + y * y;
	int radiusSquared = radius * radius;

	if (distanceFromCentreSquared < radiusSquared)
	{
		cout << "In the circle";
	}
	else if (distanceFromCentreSquared > radiusSquared)
	{
		cout << "Out of the circle";
	}
	else
	{
		cout << "On the circle";
	}
}