//way 1
const char* my_strcat(const char* dest, const char* source)
{
	size_t destLength = my_strlen(dest);
	size_t sourceLength = my_strlen(source);
	size_t resultLength = my_strlen(dest) + my_strlen(source) + 1;
	char* result = new char[resultLength];

	for (size_t i = 0; i < destLength; i++)
		result[i] = dest[i];

	for (size_t y = 0; y < sourceLength; y++)
		result[destLength + y] = source[y];

	result[resultLength - 1] = '\0';
	return result;
}

//==================================================================
//way 2
const char* my_strcat(const char* dest, const char* source)
{
	size_t destLength = my_strlen(dest);
	size_t sourceLength = my_strlen(source);
	size_t resultLength = my_strlen(dest) + my_strlen(source) + 1;
	char* result = new char[resultLength];

	int index = 0;
	while (dest[index] != '\0')
	{
		result[index] = dest[index];
		index++;
	}

	index = 0;//reset

	while (source[index] != '\0')
	{
		result[destLength + index] = source[index];
		index++;
	}

	result[resultLength - 1] = '\0';
	return result;
}
