#include <iostream>
using namespace std;


void getLargestSum(int arr[], size_t size, size_t& maxInd, size_t& secondMaxInd, int& sum) {
	int maxNum = 0, secondMaxNum = 0;
	
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > maxNum) {
			secondMaxNum = maxNum;
			secondMaxInd = maxInd;

			maxNum = arr[i];
			maxInd = i;
		}
		else if (arr[i] > secondMaxNum) {
			secondMaxNum = arr[i];
			secondMaxInd = i;
		}
	}
	sum = maxNum + secondMaxNum;

}

int main() {

	int arr[6] = { 1,2,56,4,5,9 };
	size_t ind1, ind2;
	int sum;
	getLargestSum(arr, 6, ind1, ind2, sum);
	cout << ind1 << " " << ind2 << " " << sum << endl;


}









