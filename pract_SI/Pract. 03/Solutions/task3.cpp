#include<iostream>
using namespace std;
int main()
{
	 unsigned long long oldNumber, newNumber;

	 cout << "Enter a positive number: ";
	 cin >> oldNumber;

	 oldNumber *= oldNumber;
	 newNumber = 0;

	 while (oldNumber != 0)
	 {
		  newNumber = newNumber * 10 + oldNumber % 10;
		  oldNumber /= 10;
	 }

	 cout << newNumber << endl;

	 return 0;
}