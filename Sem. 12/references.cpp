#include <iostream>
using namespace std;

void f(int a)
{
	a += 5;

}
void f2(int& a) 
{
	a += 5;
}

int main()
{
	int x = 10;
	f(x);
	cout << x << endl; //10

	f2(x);
	cout << x << endl; //15
}
