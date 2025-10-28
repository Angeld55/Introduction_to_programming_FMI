#include <iostream>

int main(){
    int n;
	std::cin >> n;
	if (n < 2) {
		std::cout << "Invalid number";
		return 0;
	}
	int maxNum = INT_MIN;
	int secondMaxNum = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;

		if (x > maxNum) {
			secondMaxNum = maxNum;
			maxNum = x;
		}
		else if (x > secondMaxNum)
			secondMaxNum = x;

	}
	std::cout << "Най-голямото: " << maxNum << std::endl;
	std::cout << "Второто по големина: " << secondMaxNum << std::endl;
}