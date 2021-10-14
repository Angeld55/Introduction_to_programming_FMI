#include<iostream>
using namespace std;


int main()
{ 
	//The reason why operator = returns a value!
	int a, b, c, d, e, f;
	a = b = c = d = e = f = 5;

	//Types
	int t1 = 4;
	double t2 = 4.5;
	char t3 = 'v';
	bool t4 = true;
	
	
	//Operators
	
	//Arithmetic operators
	int num1 = 5;
	int num2 = 2;

	int result = a + b; //7
	result = a - b;     //3
	result = a * b;       //10
	result = a / b;     // 2 (not 2.5) (both are ints)
	result = a%b;       //1  5:2 = 2 (rem :1)

	double num2Copy = 2;
	double resultCopy = num1 / num2Copy;  //2.5 (one of the variables is a double)

	int A = 5;
	int B = 2;

	cout << (A++ - B) << endl;// 3 (but A becomes 6)
	A = 5;//let's make it 5 again
	cout << (++A - B) << endl;//4 (A becomes 6)
	
	// Comparison operators

	int N1 = 5;
	int N2 = 6;

	cout << (N1 > N2)<<endl;   // 0(false);
	//or we can do this:
	bool cond = N1 > N2;
	cout << cond;


	//Other comparison operators : ==, !=, >, <, >=,<= 

	
	
	//Logical operators

	bool var1 = false;
	bool var2 = true;

	bool t1 = var1 && var2; //false;
	bool t2 = var1 || var2; //true
	bool t3 = var1 ^ var2;  //true


	//Type casting
	
	int a1 = 97;
	double b1 = a1;
	char c1 = a1;
	bool d1 = a1;

	cout << a1 << endl;  //97
	cout << b1 << endl;  //97.0
	cout << c1 << endl;  //a
	cout << d1 << endl;  //1


	double b2 = 65.5;
	int a2 = b2;
	char c2 = b2;
	bool d2 = b2;

	cout << b2 << endl;  //65.5
	cout << a2 << endl;  //65
	cout << c2 << endl;  //A
	cout << d2 << endl;  //1


	char c3 = 'a';
	double b3 = c3;
	int a3 = c3;
	bool d3 = c3;

	cout << c3 << endl;  //a
	cout << b3 << endl;  //97
	cout << a3 << endl;  //97
	cout << d3 << endl;  //1

	bool d4 = true;
	int a4 = d4;
	double b4 = d4;
	char c4 = d4;

	cout << c4 << endl;  // ??
	cout << b4 << endl;  // 1
	cout << a4 << endl;  // 1
	cout << d4 << endl;  // 1

	int grade = 5;
	
	bool isValid = grade >= 2 && grade <= 6;
	bool isValid2 = grade == 2 || grade == 3 || grade == 4 || grade == 5||grade == 6;

	bool isNotValid = !isValid;
	bool isNotValid2 = grade < 2 || grade>6;

}
