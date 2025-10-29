#include <iostream>
using namespace std;

int main(){
    int n = 0;
	cin >> n;

	if (n < 2) {
		cout << "Invalid number";
		return 0;
	}

	int maxNum = INT_MIN;
	int secondMaxNum = INT_MIN;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		if (x > maxNum) {
			secondMaxNum = maxNum;
			maxNum = x;
		}
		else if (x > secondMaxNum) {
			secondMaxNum = x;
		}

	}
	std::cout << "Max: " << maxNum << std::endl;
	std::cout << "Second to max: " << secondMaxNum << std::endl;
}