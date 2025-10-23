#include <iostream>

using namespace std;

int main() { 
	int a, b;
	cin >> a >> b;

	b += a;
	(a -= b) *= -1;
	b -= a;

	cout << "First number: " << a;
	cout << endl;
	cout << "Second number: " << b;

	//Second way :
	/* 
	   int x, y;
	   cin >> x >> y;

	   x = x + y;
	   y = x - y;
	   x = x - y;

	   cout << "First number: " << x;
	   cout << endl;
	   cout << "Second number: " << y; 
	*/
}
