#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	 double x1, y1, x2, y2;

	 cout << "x1: ";
	 cin >> x1;

	 cout << "y1: ";
	 cin >> y1;

	 cout << "x2: ";
	 cin >> x2;

	 cout << "y2: ";
	 cin >> y2;

	 cout << round(sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) * 100) / 100 << endl;

	 return 0;
}