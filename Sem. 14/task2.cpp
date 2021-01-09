#include <iostream>
using namespace std;

void countBinaryElements(unsigned n, unsigned& zeros, unsigned& ones)
{
	if (n == 0)
		return;

	int lastBit = n % 2;
	if (lastBit == 1)
		ones++;
	else if (lastBit == 0)
		zeros++;
	countBinaryElements(n >> 1, zeros, ones);

}
int main()
{
	int n;
	cin >> n;

	unsigned ones = 0, zeros = 0;
	countBinaryElements(n, ones, zeros);
	cout << ones << " " << zeros;
}