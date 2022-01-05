#include <iostream>



unsigned factRec(unsigned n)  // О(n)
{
	if (n == 0)
		return 1;
	return n * factRec(n - 1);
}

int main()
{
 std::cout << factRec(5); 
  
}
