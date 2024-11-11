#include <iostream>
using namespace std;

bool isDivisableByValue(int number, int divisor) {
	return (((number / divisor) * divisor) == number);
}

int main() {
    int num, div;
    cin >> num >> div;
    bool result = isDivisableByValue(num, div);
    cout << result;
}