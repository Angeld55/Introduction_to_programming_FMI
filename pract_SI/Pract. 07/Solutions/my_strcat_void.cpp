unsigned my_strlen(const char *str) {
	unsigned index = 0;

	while (str[index] != TERMINATE_SYMBOL) {
		index++;
	}
	return index;
}

//dest does NOT have enough space, return a new array
void my_strcat4(char *&dest, const char* source)
{
	size_t destLength = my_strlen(dest);
	size_t sourceLength = my_strlen(source);
	size_t resultLength = destLength + sourceLength + 1;

	char* temp = new char[destLength];
	for (size_t i = 0; i < destLength; i++)
	{
		temp[i] = dest[i];
	}

	delete[] dest;
	dest = nullptr;
	
	dest = new char[resultLength];
	
	for (size_t i = 0; i < destLength; i++)
	{
		dest[i] = temp[i];
	}

	for (size_t y = 0; y < sourceLength; y++)
	{
		dest[destLength + y] = source[y];
	}

	dest[resultLength - 1] = '\0';
	delete[] temp;
	temp = nullptr;
}
