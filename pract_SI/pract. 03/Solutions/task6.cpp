#include<iostream>
using namespace std;
int main()
{
	 unsigned int number = 0, input = 1;

	 while(input != 0)
	 {
		  cout << "Enter a positive number: ";
		  cin >> input;

		  number ^= input;
	 }

	 cout << "The single number is " << number << endl;

	 return 0;
}