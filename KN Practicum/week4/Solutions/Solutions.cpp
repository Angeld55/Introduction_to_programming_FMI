#include <iostream>

using namespace std;

//task1
int sumInIntervalSlow(int start, int finish)
{
	int result = 0;
	for (int i = start; i <= finish; ++i)
		result += i;
	return result;
}

int sumInIntervalFast(int start, int finish)
{
	return ((finish-start+1)*start +((finish - start + 1) * (finish - start) / 2));
}

//task2
unsigned absN(int n)
{
	if (n < 0)
		return -n;
	return n;
}

//task3
bool isTriangleValid(unsigned a, unsigned b, unsigned c)
{

	return ((a + b > c) && (a + c > b) && (b + c > a));
}

unsigned getDist(int x1, int y1, int x2, int y2)
{
	return sqrt((x1 * x2) + (y1 * y2));
}

unsigned perimeter(int x1, int y1, int x2, int y2, int x3, int y3)
{
	unsigned side1 = getDist(x1, y1, x2, y2);
	unsigned side2 = getDist(x1, y1, x3, y3);
	unsigned side3 = getDist(x2, y2, x3, y3);

	if (isTriangleValid(side1, side2, side3))
		return (getDist(x1, y1, x2, y2) + getDist(x1, y1, x3, y3) + getDist(x2, y2, x3, y3));


	return 0;
}

unsigned getArea(int x1, int y1, int x2, int y2, int x3, int y3)
{
	unsigned side1 = getDist(x1, y1, x2, y2);
	unsigned side2 = getDist(x1, y1, x3, y3);
	unsigned side3 = getDist(x2, y2, x3, y3);

	if (isTriangleValid(side1, side2, side3))
	{
		double p = (side1 + side2 + side3) / 2;
		return sqrt(p * (p - side1) * (p - side2) * (p - side3));
	}

	return 0;
}

//task 4
bool isDigit(char a)
{
	return ((a >= '0') && (a <= '9'));
}

//task 5
char toUpper(char a)
{
	if (a < 'a' || a>'z')
		return a;

	return a - 32;
}

//task 6
char toLower(char a)
{
	if (a < 'A' || a>'Z')
		return a;

	return a + 32;
}

//task 7
unsigned toNumber(char a)
{
	if (!isDigit(a))
		return a;
	
	return a - 48;
}

//task 8
unsigned gcd(int n, int k)
{
	if (n < k)
	{
		int temp = n;
		n = k;
		k = temp;
	}

	while (k != 0)
	{
		int mod = n % k;
		n = k;
		k = mod;
	}

	return n;
}

unsigned lcm(int n, int k)
{
	if (n < 0)
		n = absN(n);
	if (k < 0)
		k = absN(k);

	return ((n * k) / gcd(n, k));
}

//task 10
bool canWin(unsigned coins)
{
	return coins % 4 == 0;
}

int main()
{

}