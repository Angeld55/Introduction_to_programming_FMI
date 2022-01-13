#include <vector>

void insertIntoVector(std::vector<int>& arr, int number, int index)
{
	if (arr.empty() || arr.size() <= index) //insert @end
	{
		arr.push_back(number); 
		return;
	}

	if (arr[index] > number)
	{
		arr.insert(arr.begin() + index, number);
		return;
	}

	return insertIntoVector(arr, number, ++index);
}
