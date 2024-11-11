#include <iostream>
using namespace std;

unsigned absoluteValue(int n) {
	if (n < 0)
		return -n;
	return n;
}

int getDivision(int first, int second) {
	bool negativeRes = ((first < 0 && second >= 0) || (first >= 0 && second < 0));
	first = absoluteValue(first);
	second = absoluteValue(second);
	
	first = first - (first % second); //10 - (10 % 2) = 10 - 0
	int result = 0; 
	while (first != 0) 
	{
		++result; //1, 2, 3, 4, 5
		first = first - second; //10 - 2 = 8, 8 - 2 = 6, 6 - 2 = 4, 4 - 2 = 2, 2 - 2 = 0 -> end
	}
	
	if (negativeRes)
		return -result;

	return result;
}

int main() {

}