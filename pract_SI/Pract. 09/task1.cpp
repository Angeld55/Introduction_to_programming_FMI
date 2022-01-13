bool Exist_digit(unsigned int val, unsigned int digit)
{
        if (val == 0)
			return false;
		
        if (val % 10 == digit)
            return true;

        Exist_digit(val / 10, digit)
}