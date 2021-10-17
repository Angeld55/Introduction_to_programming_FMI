#include <iostream>
using namespace std;

const double PI = 3.14;
int main()
{
	char figure;
	cin >> figure;

	if (figure == 's')
	{
		double side;
		cin >> side;
		cout << side * side << endl;
	}
	else if (figure == 'r')
	{
		double sideA, sideB;
		cin >> sideA >> sideB;
		cout << sideA * sideB << endl;
	}
	else if (figure == 'c')
	{
		double R;
		cin >> R;
		cout << PI * R * R << endl;
	}
	else if (figure == 't')
	{
		double width;
		double height;
		cin >> width >> height;
		cout << width * height / 2 << endl;
	}
	else
	{
		cout << "Invalid figure!" << endl;
	}
}
