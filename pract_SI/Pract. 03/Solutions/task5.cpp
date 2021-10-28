#include<iostream>
using namespace std;
int main()
{
	 unsigned short number, guess;
	 unsigned int counter = 0;

	 cout << "Enter a number between 0 and 100: ";
	 cin >> number;
	 if (number < 0 || number > 100)
	 {
		  cout << "Invalid input!\n";
		  return 1;
	 }

	 do
	 {
		  ++counter;

		  cout << "Guess " << counter << ": ";
		  cin >> guess;
		  if (guess < 0 || guess > 100)
		  {
				cout << "Invalid input!\n";
				return 2;
		  }

		  if (guess < number)
		  {
				cout << "The number you are looking for is greater than your guess!\n";
		  }
		  else if (guess > number)
		  {
				cout << "The number you are looking for is less than your guess!\n";
		  }
	 } while (guess != number);

	 cout << "You found the number in " << counter << " attempt(s)!\n";

	 return 0;
}