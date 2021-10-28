#include<iostream>
using namespace std;
int main()
{
	 // you can use int as well, but do you really need something as big as int?
	 short number;
	 unsigned char digit1, digit2, digit3, digit4, number1, number2;

	 cout << "Enter a 4-digit number: ";
	 cin >> number;

	 if (number < 1000 || number > 10000)
	 {
		  cout << "The input must be a 4-digit number!\n";
		  return 1;
	 }

	 digit1 = number / 1000;
	 digit2 = number / 100 % 10;
	 digit3 = number / 10 % 10;
	 digit4 = number % 10;

	 number1 = digit1 * 10 + digit4;
	 number2 = digit2 * 10 + digit3;

	 if (number1 < number2)
	 {
		  cout << "less (" << (int)number1 << " < " << (int)number2 << ")\n";
	 }
	 else
	 {
		  if (number1 == number2)
		  {
				cout << "equal (" << (int)number1 << " = " << (int)number2 << ")\n";
		  }
		  else
		  {
				cout << "greater (" << (int)number1 << " > " << (int)number2 << ")\n";
		  }
	 }


	 return 0;
}