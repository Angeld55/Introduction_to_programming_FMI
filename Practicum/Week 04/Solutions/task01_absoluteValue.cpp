#include <iostream>
using namespace std;

unsigned absoluteValue(int n) {
	if (n < 0)
		return -n;
	return n;
}

int main() {
    int n;
    cin >> n;
    cout << absoluteValue(n);
}