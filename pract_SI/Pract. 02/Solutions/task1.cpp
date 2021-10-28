#include<iostream>
using namespace std;
int main()
{
	 int year;

	 cout << "Enter an year to check: ";
	 cin >> year;

	 cout << year << " is";

	 if (!(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)))
	 {
		  cout << " not";
	 }

	 cout << " leap!\n";

	 return 0;
}