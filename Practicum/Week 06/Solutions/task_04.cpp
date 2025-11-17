

#include <iostream>
using namespace std;

int getLength(int number) {
	int res = 0;
	if (number == 0){
		return 1;
    }
	while (number != 0) {
		res++;
		number /= 10;
	}
	return res;
}
int reverseNumber(int number) {
	int result = 0;
	while (number != 0) {

		result *= 10;
		result += number % 10;
		number /= 10;
	}
	return result;
}
int getDigitOnPosition(int number, int k) {
	int num = reverseNumber(number);
	while (k > 1) {
		num /= 10;
		k--;
	}
	return num % 10;
}
int getPower(int number,int k) {
	int res = 1;
	int power = getLength(number) - k;
	while (power != 0) {
		res *= 10;
		power--;
	}
	return res;
}
void swapKthDigit(int& n, int& m, int k) {
	if (k > getLength(n) || k > getLength(m))
		return;
	int kthDigitN = getDigitOnPosition(n, k);
	int kthDigitM = getDigitOnPosition(m, k);

	n = n - kthDigitN * getPower(n, k) + kthDigitM * getPower(n, k);
	m = m - kthDigitM * getPower(m, k) + kthDigitN * getPower(m, k);

}
int main() {
	
	int m, n, k;
	cin >> n >> m >> k;
	swapKthDigit(n, m, k);
	cout << n << " " << m << endl;
}
	





