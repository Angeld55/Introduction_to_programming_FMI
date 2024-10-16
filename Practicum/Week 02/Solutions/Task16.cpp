#include <iostream>
using namespace std;

int main()
{
	const char CONVERT_FROM_UPPER_TO_LOWER = 'a' - 'A';

	// Think about adding validation to the input parameters
	char capitalStart, capitalEnd, lowerStart, lowerEnd, currentSymbol;
	cin >> capitalStart >> capitalEnd >> lowerStart >> lowerEnd >> currentSymbol;

	if (currentSymbol >= 'A' && currentSymbol <= 'Z') 
	{
		currentSymbol += CONVERT_FROM_UPPER_TO_LOWER;
	}

	capitalStart += CONVERT_FROM_UPPER_TO_LOWER;
	capitalEnd += CONVERT_FROM_UPPER_TO_LOWER;

	// We will not be able to use these two variables for sub-task #4
	bool isInFirstSet = (currentSymbol >= capitalStart && currentSymbol <= capitalEnd);
	bool isInSecondSet = (currentSymbol >= lowerStart && currentSymbol <= lowerEnd);

	// Sub-task #1
	bool isInUnion = isInFirstSet || isInSecondSet;
	// Sub-task #2
	bool isInIntersection = isInFirstSet && isInSecondSet;
	// Sub-task #3
	bool isInDifference = isInFirstSet && !isInSecondSet;
	// Sub-task #4
	bool isInOnlyOneSet = isInUnion && !isInIntersection;

	cout << (isInUnion ? "true, " : "false, ");
	cout << (isInIntersection ? "true, " : "false, ");
	cout << (isInDifference ? "true, " : "false, ");
	cout << (isInOnlyOneSet ? "true, " : "false, ");
}