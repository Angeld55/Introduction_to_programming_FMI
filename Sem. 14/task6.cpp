#include <iostream>
using namespace std;

bool canBeCovered(int n, int m)
{
	if ((n == 0 && m >= 0) || (n>=0 && m==0)) //empty rectangle can be covered
		return true;

	if (n < 0 || m < 0) //out of range
		return false;

	if ((n == 1 && m == 2) || (n == 3 && m == 1)) //exactly one 1x2 or 3x1
		return true;

	if ((n == 1 && m == 1) || (n == 2 && m == 1)) // to swall for our plates
		return false;

	
	
	//if the plate 1x2 stands in the top left corner
	bool case1 = (m >=2 && canBeCovered(n - 1, 2) && canBeCovered(n, m - 2)) //try cut vertically 
			 ||  (n>=1 && canBeCovered(n-1, m) && canBeCovered(1, m-2)); //try cut horizontaly
		
	if (case1)
		return true;

	//if the plate 3x1 stands in the top left corner
	bool case2 = (m >= 1 && canBeCovered(n - 3, 1) && canBeCovered(n, m - 1)) //try cut vertically 
		|| (n>=3 && canBeCovered(3, m - 1) && canBeCovered(n - 3, m)); //try cut horizontaly

	return case2;
}
int main()
{
	int n, m;
	cout << canBeCovered(4, 3);
}
