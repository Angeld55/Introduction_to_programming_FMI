

#include <iostream>
using namespace std;

void swap(int& a, int& b) {

	int temp = a;
	a = b;
	b = temp;
}
int main() {
	
	int a, b;
	cin >> a >> b;
	cout << "Numbers before swap" << endl;
	cout << a <<" "<< b << endl;
	swap(a, b);
	cout << "Number after swap"<< endl;
	cout << a << " " << b << endl;
	
}
	





