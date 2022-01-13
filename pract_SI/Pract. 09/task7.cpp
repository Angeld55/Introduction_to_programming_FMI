#include <vector>

bool checkIsPalindrom(const vector<int>& v)
{
	//if (v.size() < 2) - not needed as for-loop covers this case.
	//	return true;

	for (size_t i = 0; i < v.size() / 2; i++)
		if (v[i] != v[v.size() - 1 - i])
			return false;

	return true;
}

bool isPalindrom(const std::vector<int>& v, int operations)
{
	if(v.empty())
		return false;

	if (operations < 0)
		return false;

	if (checkIsPalindrom(v))
		return true;

	std::vector<int> left = v, right = v;
	left.erase(left.begin()); //remove first
	right.pop_back(); //remove last
	operations--;
	
	return isPalindrom(left, operations) || isPalindrom(right, operations);
}