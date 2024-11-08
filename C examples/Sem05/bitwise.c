#include <stdio.h>
#include <math.h>

unsigned powerOfTwo(unsigned n) ///32 bita -> [0 .. 2^32 - 1]
{
	if (n >= 32)
		return 0;
	return 1 << n;
}
int isEven(int n)
{
	int mask = 1;
	return ~n & mask;//  even -> 0  odd -> 1
}

int toggleBit(int n, int bitIndex)
{
	int mask = 1 << bitIndex;
	return n ^ mask;
}

int checkBit(int n, int bitIndex)
{
	int mask = 1 << bitIndex;
	return (n & mask) >> bitIndex;
}

int main() {

	int a = 7;
	printf("%d", toggleBit(10, 0));
}
