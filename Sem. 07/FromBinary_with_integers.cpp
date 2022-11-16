

#include <iostream>

using namespace std;


unsigned int fromBinary(unsigned int n)
{
	unsigned int result = 0;
	unsigned int mult = 1; //2^0
	while (n != 0)
	{
		result += ((n % 2) * mult);
		mult *= 2;
		n /= 10;
	}
	return result;
}


int main()
{
    cout<< fromBinary(10111) << endl;

    return 0;
}
