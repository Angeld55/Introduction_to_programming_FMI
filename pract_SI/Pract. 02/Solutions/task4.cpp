#include<iostream>
using namespace std;
int main()
{
	 double a, b, c;

	 cout << "First side: ";
	 cin >> a;

	 cout << "Second side: ";
	 cin >> b;

	 cout << "Third side: ";
	 cin >> c;

	 if ((a + b > c) && (a + c > b) && (b + c > a))
	 {
		  cout << "Triangle is valid.\n";
	 }
	 else
	 {
		  cout << "Triangle is not valid.\n";
	 }

	 return 0;
}