// Задача: Да се напише функция, която приема число и връща най-дългото под-число, което е палиндром
 
#include <iostream>
using namespace std;
 
int reverse(int n)
{
    int result = 0;
    while(n != 0)
    {
        (result *= 10) += (n % 10);
        n /= 10;
    }
    return result;
}

bool isPalindome(int n)
{
	return n == reverse(n);
}
 
int longestSubnumberPalindrome(int n)
{
	int longestPalindrome = 0;
	while(n >= 10)
	{
		int reverseN = reverse(n);
 
		while(reverseN != 0)
		{
		 	if(isPalindome(reverseN) && reverseN > longestPalindrome)
				longestPalindrome = reverseN;
			reverseN /= 10;
		}
 
	    n /= 10;
	}
	return longestPalindrome;
}
 
int main()
{
    cout << longestSubnumberPalindrome(1234);

    return 0;
}