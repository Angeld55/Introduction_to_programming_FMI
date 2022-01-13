//Way 1
unsigned Pow(unsigned x, unsigned n)
{
	if (n != 0)
		return x * Pow(x, n - 1);

	return 1;
}

//Way 2 - more optional
unsigned power(unsigned x, unsigned n)
{
	if (n == 0)
		return 1;

	if (n % 2 == 1)
		return x * power(x, n - 1);
	else
	{
		unsigned temp = power(x, n / 2);
		return temp * temp;
	}
}