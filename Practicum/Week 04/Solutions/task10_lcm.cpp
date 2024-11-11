#include <iostream>
using namespace std;

//func from task 6
unsigned gcd(int n, int k) {
	if (n < k) {
		int temp = n;
		n = k;
		k = temp;
	}
	while (k != 0) {
		int mod = n % k;
		n = k;
		k = mod;
	}
	return n;
}

//func from task 1
unsigned absoluteValue(int n) {
	if (n < 0)
		return -n;
	return n;
}

unsigned lcm(int n, int k) {
	if (n < 0)
		n = absoluteValue(n);
	if (k < 0)
		k = absoluteValue(k);

	return ((n * k) / gcd(n, k));
}

int main() {

}