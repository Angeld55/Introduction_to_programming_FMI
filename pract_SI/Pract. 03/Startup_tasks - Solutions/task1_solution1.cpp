#include <iostream>

using namespace std;

int main()
{
	int n, initialSum;
	cin >> n;
	initialSum = n;

	int Hundred_Dollar_Bill = 0;
	int Fifty_Dollar_Bill = 0;
	int Twenty_Dollar_Bill = 0;
	int Ten_Dollar_Bill = 0;
	int Five_Dollar_Bill = 0;
	int Two_Dollar_Bill = 0;
	int One_Dollar_Bill = 0;

	Hundred_Dollar_Bill = n / 100;
	n %= 100;
	Fifty_Dollar_Bill = n / 50;
	n %= 50;
	Twenty_Dollar_Bill = n / 20;
	n %= 20;
	Ten_Dollar_Bill = n / 10;
	n %= 10;
	Five_Dollar_Bill = n / 5;
	n %= 5;
	Two_Dollar_Bill = n / 2;
	n %= 2;
	One_Dollar_Bill = n;
	
	cout << initialSum << " = " << Hundred_Dollar_Bill << "*100 + " << Fifty_Dollar_Bill << "*50 + " << Twenty_Dollar_Bill << "*20 + " << Ten_Dollar_Bill << "*10 + " <<
			Five_Dollar_Bill << "*5 + " << Two_Dollar_Bill << "*2 + " << One_Dollar_Bill << "*1" << endl;
}