int askUser(int from, int to)
{
	int number;
	while (std::cin >> number)
	{
		if (number >= from && number <= to)
			return number;
	}
}