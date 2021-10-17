#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	 double x, y;

	 cout << "Enter the first number: ";
	 cin >> x;

	 cout << "Enter the second number: ";
	 cin >> y;

	 if (fabs(x - y) < 0.000001)
	 {
		  cout << "Numbers must be different!\n";
		  return 1;
	 }

	 cout << (x < y ? y : x) << " is the greater number!\n";

	 return 0;
}