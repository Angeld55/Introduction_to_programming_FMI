#include<iostream>
using namespace std;
int main()
{
	 double a, b;

	 cout << "First number: ";
	 cin >> a;

	 cout << "Second number: ";
	 cin >> b;

	 cout << boolalpha << (a < b) << endl;

	 return 0;
}