#include <iostream>
using namespace std;

int getIndexOfSymbol(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	else if (ch >= 'A' && ch <= 'Z')
		return 10 + (ch - 'A');
        else if (ch >= 'a' && ch <= 'z')
                return 10 + (ch - 'a');
	else
		return -1;
}

unsigned task1(char ch1, char ch2, unsigned k)
{
     return getIndexOfSymbol(ch2) + k*getIndexOfSymbol(ch1);
}

int main()
{
  cout << task1('a','B', 16) << endl;
}
