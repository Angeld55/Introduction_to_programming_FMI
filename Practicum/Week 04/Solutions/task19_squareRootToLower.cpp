#include <iostream>
using namespace std;

unsigned squareRootToLower(int number) {
	if (number < 1)
		return 0;

	unsigned result = 0;

	while ((result * result) <= number)
		result++;

	return --result;
}

int main() {
    int num;
    cin >> num;
    unsigned res = squareRootToLower(num);
    cout << res;
}