#include<iostream>
using namespace std;
int main()
{
	 double a, b;
	 char operation;

	 cout << "Enter the first number: ";
	 cin >> a;

	 cout << "Enter the second number: ";
	 cin >> b;

	 cout << "Choose operation: +, -, / or *: ";
	 cin >> operation;

	 switch (operation)
	 {
	 case '+':
		  cout << "Result: " << a + b << endl;
		  break;
	 case '-':
		  cout << "Result: " << a - b << endl;
		  break;
	 case '*':
		  cout << "Result: " << a * b << endl;
		  break;
	 case '/':
		  if (b < 0.0000001)
		  {
				cout << "You can not divide by zero!\n";
				return 1;
		  }
		  cout << "Result: " << a / b << endl;
		  break;
	 default:
		  cout << "Invalid operation!\n";
		  break;
	 }

	 return 0;
}