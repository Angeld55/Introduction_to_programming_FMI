long long toBinary(int number)
{
	if (number < 0)
		number *= -1;

	int buffer[MAX_POWTWO_SIZE];
	int size = 0;

	while (number > 0)
	{
		buffer[size] = number % 2;
		number /= 2;
		size++;
	}

	long long convertedToBinary = 0;
	long long multiply = 1;
	for (int i = 0; i < size; i++)
	{
		convertedToBinary += buffer[i] * multiply;
		multiply *= 10;
	}

	return convertedToBinary;
}

void convertToBinary(long long &number)
{
	if (number < 0)
		number *= -1;

	int buffer[MAX_POWTWO_SIZE];
	int size = 0;

	while (number > 0)
	{
		buffer[size] = number % 2;
		number /= 2;
		size++;
	}

	long long multiply = 1;
	for (int i = 0; i < size; i++)
	{
		if(buffer[i] == 1)
			number +=  multiply;

		multiply *= 10;
	}
}