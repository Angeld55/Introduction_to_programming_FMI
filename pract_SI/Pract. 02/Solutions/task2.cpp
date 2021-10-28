#include<iostream>
using namespace std;
int main()
{
	 char inputCharacter;

	 cout << "Enter a character to test: ";
	 cin >> inputCharacter;

	 cout << inputCharacter << " is ";
	 if (inputCharacter == 'a' || inputCharacter == 'e' || inputCharacter == 'i' || inputCharacter == 'o' || inputCharacter == 'u' ||
		  inputCharacter == 'A' || inputCharacter == 'E' || inputCharacter == 'I' || inputCharacter == 'O' || inputCharacter == 'U')
	 {
		  cout << "a vowel!\n";
	 }
	 else
	 {
		  if ((inputCharacter >= 'a' && inputCharacter <= 'z') || (inputCharacter >= 'A' && inputCharacter <= 'Z'))
		  {
				cout << "a consonant!\n";
		  }
		  else
		  {
				cout << "is not a letter from the English alphabet!\n";
		  }
	 }

	 return 0;
}