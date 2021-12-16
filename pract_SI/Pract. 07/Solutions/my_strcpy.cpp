void my_strcpy(char* dest, const char* source)
{
	size_t index = NULL;
	while (source[index] != '\0')
	{
		dest[index] = source[index];
		index++;
	}
	dest[index] = '\0';
}
