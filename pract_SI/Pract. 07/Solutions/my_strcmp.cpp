int min(const size_t first,const size_t second)
{
	return (first < second ? first : second);
}

int my_strcmp(const char* str1, const char* str2)
{
	size_t str1Length = my_strlen(str1);
	size_t str2Length = my_strlen(str2);
	size_t smallerLength = min(str1Length, str2Length);

	for (size_t i = NULL; i < smallerLength; i++)
	{
		if (str1[i] - str2[i] != NULL)
			return str1[i] - str2[i];
	}

	return str1Length - str2Length;
}