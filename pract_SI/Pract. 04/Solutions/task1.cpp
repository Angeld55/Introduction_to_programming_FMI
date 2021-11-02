#include <iostream>

using namespace std;

int sum(const int a, const int b)
{
	/*
	//First way
	int sum = a + b;
	return sum;
	*/

	//Second way
	return a + b;
}

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	//First way
	cout << sum(num1, num2) << endl; //return as output on Console
	
	/*
	//Second way
	//int sumOfNumbers = sum(num1, num2); //create an int with value num1+num2;
	//cout << sumOfNumbers << endl;
	*/

	return 0;
}


