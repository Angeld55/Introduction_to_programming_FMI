//If destination has enough space
void my_strcat(char* dest, const char* source)
{
	size_t destLength = my_strlen(dest);
	size_t sourceLength = my_strlen(source);

	for (size_t i = 0; i < sourceLength; i++)
	{
		dest[destLength + i] = source[i];
	}
	dest[destLength + sourceLength] = '\0';
}
