 #include <iostream>

unsigned fibbRec(unsigned n, int* cache)  
{
	if (n <= 1)
		return 1;
	if (cache[n] != 0) //вече е сметнато
		return cache[n];

	unsigned result = fibbRec(n - 1, cache) + fibbRec(n - 2, cache);
	cache[n] = result;
	return result;
}
unsigned fibb(unsigned n)
{
	int* cache = new int[n + 1]; 
	for (unsigned i = 0; i < n + 1; i++)
		cache[i] = 0;

	unsigned result = fibbRec(n, cache);
	delete[] cache;
	return result;
}

int main()
{
 std::cout << fibb(40) << std::endl;
}
