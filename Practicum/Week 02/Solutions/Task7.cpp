#include <iostream>
using namespace std;

int main()
{
	char symbol = '\0';
	cin >> symbol;

	if (symbol >= 'A' && symbol <= 'Z')
	{
		cout << "Uppercase ";
		symbol += 'a' - 'A';
	}
	else if (symbol >= 'a' && symbol <= 'z')
	{
		cout << "Lowercase ";
		symbol += 'A' - 'a';
	}

	switch (symbol)
	{
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':
		cout << "Vowel" << endl;
		break;
	default:
		cout << "Consonant" << endl;
		break;
	}

	cout << symbol;
}
