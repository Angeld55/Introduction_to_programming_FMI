#include <iostream>



unsigned power(unsigned n, unsigned k) //Log(k)
{
	if (k == 0)
		return 1;

	if (k % 2 == 1)
		return n * power(n, k - 1);
	else
	{
		unsigned temp = power(n, k / 2);
		return temp * temp;
	}
}
// n - в двоична бройна система ми трябват log(n) символа за да го запиша
//  k = 10000000000 - Правите Log(k) стъпки
//  k = 11111111111 - правите 2*log(K) стъпки


int main()
{
  std::cout << power(2, 8) << std::endl; 
}
