#include <iostream>
using namespace std;

int main()
{
	int a = 13;     // 000...01101
	int b = 20;	    // 000...10100

	int r1 = a & b; // 000...00100(4)
	int r2 = a | b; // 000...11101(29)
	int r3 = a ^ b; // 000...11001(25)
	int r4 = a >> 1;// 000...00110(6)
	int r5 = b << 1;// 000..101000(40)

	std::cout << r1 << endl;
	std::cout << r2 << endl;
	std::cout << r3 << endl;
	std::cout << r4 << endl;
	std::cout << r5 << endl;
}