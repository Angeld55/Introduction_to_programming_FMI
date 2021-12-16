size_t my_strlen(const char* str)
{
	size_t length = NULL	;
	while (str[length] != '\0')
		length++;
	return length;
}