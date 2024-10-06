#include <iostream>

using namespace std;

int main() {
	int n, result = 0;
	cin >> n;

	result += n % 10; //get last digit of n
	result *= 10;
	n /= 10; //remove last digit of n

	result += n % 10;
	result *= 10;
	n /= 10;

	result += n;
	result++;

	cout << result;
}
