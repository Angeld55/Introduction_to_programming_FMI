#include <iostream>
using namespace std;

int main()
{
	char ch;
	cin >> ch;
		
	bool isVowel = ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'i'
				|| ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U' || ch == 'I';

	cout << isVowel << endl;
}
