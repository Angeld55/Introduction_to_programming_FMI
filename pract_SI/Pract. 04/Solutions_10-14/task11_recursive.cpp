/*
NOTE!
Current Solution uses recursion, which we still have NOT taken/discussed.
*/

void toBinary(unsigned int num)
{
	if (num > 1) {
		toBinary(num / 2);
	}
	std::cout << num % 2;
}