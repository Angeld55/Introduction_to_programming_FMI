#include <iostream>
using namespace std;

bool isSquareRootVar1(int number) {
	double root = sqrt(number), epsilon = 1e-6;

	int rootInt = root;
	return (root - rootInt < epsilon);
}

bool isSquareRootVar2(int number) {
	double root = sqrt(number);
	int rootInt = root;
	return ((rootInt * rootInt) == number);
}

int main() {
    int n;
    cin >> n;
    bool res1 = isSquareRootVar1(n);
    bool res2 = isSquareRootVar2(n);
    cout << res1 << " " << res2; //res1 and res2 are supposed to be equal
}