

#include <iostream>
using namespace std;
constexpr size_t SIZE = 20;

void getPositiveAndNegativeCount(const int arr[], size_t size, int& positiveCount, int& negativeCount) {
	positiveCount = negativeCount = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			positiveCount++;
		}
		else if (arr[i] < 0) {
			negativeCount++;
		}
		else
			continue;
	}
}
int main() {
	
	int arr[SIZE] = { 1 , -1, -4, -3 ,-5 ,6 ,3 ,-4 ,7 , 9};
	int pos, neg;
	getPositiveAndNegativeCount(arr, SIZE, pos, neg);

    cout << "positive: " << pos << endl;
    cout << "negative: " << neg << endl;
	if (pos > neg) {
		cout << "The number of positive integers is greater than the number of negative integers";
	}
	else if (pos < neg) {
		cout << "The number of positive integers is less than the number of negative integers";
	}
	else {
		cout << "The number of negative integers is equal to the number of possitive integers";
	}
	
}
	





