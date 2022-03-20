#include <iostream>

int min(int a, int b)
{
	return a < b ? a : b;
}
int min(int a, int b, int c)
{
	return min(min(a, b), c);
}
int getMinOperations(size_t N, int* cache)
{
	if (N == 1)
		return 0;

	if (cache[N] != 0)
		return cache[N];

	int dvBy3 = INT_MAX;
	int dvBy2 = INT_MAX;
	int s1 = INT_MAX;

	if (N % 3 == 0)
		dvBy3 = getMinOperations(N / 3, cache);
	if (N % 2 == 0)
		dvBy2 = getMinOperations(N / 2, cache);
	s1 = getMinOperations(N - 1, cache);

	int result = 1 + min(dvBy2, dvBy3, s1);
	cache[N] = result;
	return result;
}

int getMinOperationsWrapper(size_t N)
{
	int* cache = new int[N + 1];
	for (size_t i = 0; i < N + 1; i++)
		cache[i] = 0;

	int result = getMinOperations(N, cache);
	delete[] cache;
	return result;
}

int main()
{
	std::cout << getMinOperationsWrapper(19);// 1 -> 3 -> 6 -> 18 -> 19
}
