

#include <iostream>
using namespace std;
void swap(int& a, int& b) {

	int temp = a;
	a = b;
	b = temp;
}
int myGCD(int a, int b) {
	if (b < a) {
		swap(a, b);
	}
	while (b != 0) {
		int mod = a % b;
		a = b;
		b = mod;
	}
	return a;
}
void reduceFraction(int& num, int& denom) {
	int gcd = myGCD(num, denom);
	num /= gcd;
	denom /= gcd;

}
int main() {
	
	int a, b;
	cin >> a >> b;
	reduceFraction(a, b);
	cout << a << " " << b;
	
}
	





