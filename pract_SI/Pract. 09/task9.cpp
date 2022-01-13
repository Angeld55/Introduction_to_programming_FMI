void printLeapYears(unsigned year, unsigned N)
{
	if (N == 0)
		return;

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		cout << year << endl;
		return printLeapYears(year + 4, --N);
	}
	else if(year % 100 == 0)
		return printLeapYears(year + 4, N);

	return printLeapYears(year + 1, N);
}