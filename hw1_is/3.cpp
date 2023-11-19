#include <iostream>
using namespace std;


////////////Start//////////////Functions that are written in class (we can use them)
unsigned getDigitsCount(unsigned n)
{
	if (n == 0)
		return 1;
	unsigned count = 0;

	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return count;
}


unsigned countDigitOccurences(unsigned n, unsigned digit)
{
	if (digit == 0 && n == 0)
		return 1;

	unsigned count = 0;
	while (n != 0)
	{
		int lastDigit = n % 10;
		if (lastDigit == digit)
			count++;
		n /= 10;
	}
	return count;
}
bool areAllDistinctDigits(unsigned n)
{
	for (int i = 0; i <= 9; i++)
	{
		if (countDigitOccurences(n, i) > 1)
			return false;
	}
	return true;
}
////////////End//////////////

//Solution: 
//We fill an array if integers with all possible candidates for the number.
//With each qwery we remove some of those number. The "removing" is just replacing it with -1 in the array.
//Since we are allowing leading zeros, if K = 4, then the number 234 is intepreted as 0234. 

void getMinMaxCandidates(int k, int& lowerBound, int& upperBound)
{
	switch (k)
	{
		case 1: lowerBound = 0;    upperBound = 9; break;
		case 2: lowerBound = 1;    upperBound = 99; break;
		case 3: lowerBound = 10;   upperBound = 999; break;
		case 4: lowerBound = 100;  upperBound = 9999; break;
		case 5: lowerBound = 1000; upperBound = 99999; break;
		case 6: lowerBound = 10000;upperBound = 999999; break;
	}
}

size_t fillAllInitialCandidates(unsigned candidates[], int k)
{
	int lowerBound, upperBound;
	getMinMaxCandidates(k, lowerBound, upperBound);

	size_t candidatesCount = 0;
	for (int i = lowerBound; i <= upperBound; i++) //i is the candidate -> should be with distinct digits and with length k
	{                                              //if the lenght is k-1 it should not contain a zero, since we are interpeting that it contains a leading zero
		bool distinctDigits = areAllDistinctDigits(i);
		unsigned digitsCount = getDigitsCount(i);
		if (!distinctDigits) 
			continue;
		if(digitsCount == k || (digitsCount == k - 1 && countDigitOccurences(i, 0) == 0))
			candidates[candidatesCount++] = i;
	}
	return candidatesCount;
}


//////////////Start///////////// -> this functions are also written in class. Small modification is needed for the possible leading zero.
unsigned getBulls(unsigned toGuess, unsigned myGuess, unsigned k)
{
	unsigned bulls = 0;

	if (getDigitsCount(myGuess) == k - 1 && getDigitsCount(toGuess) == k - 1) //both start with zero
		bulls++; 

	while (toGuess != 0)
	{
		if (toGuess % 10 == myGuess % 10)
			bulls++;
		toGuess /= 10;
		myGuess /= 10;
	}
	return bulls;

}

unsigned getBullsAndCowsSum(unsigned a, unsigned b, unsigned k)
{
	unsigned sum = 0;
	
	bool startsAWithZero = countDigitOccurences(a, 0);
	bool startsBWithZero = countDigitOccurences(a, 0);

	if (startsAWithZero && startsBWithZero)
		sum++;

	while (a != 0)
	{
		int lastDigit = a % 10;

		bool contains = countDigitOccurences(b, lastDigit) == 1;

		if (contains || (lastDigit == 0 && startsBWithZero))
			sum++;

		a /= 10;
	}
	return sum;
}

void getBullsAndCows(unsigned a, unsigned b,
					 unsigned& bulls, unsigned& cows, unsigned k)
{
	bulls = getBulls(a, b, k);
	cows = getBullsAndCowsSum(a, b, k) - bulls;
}
////////////End//////////////

void markInvalidCandidates(unsigned candidates[], size_t size, unsigned number, unsigned bulls, unsigned cows, unsigned k)
{
	for (unsigned i = 0; i < size; i++)
	{
		unsigned candidateBulls = 0, candidateCows = 0;
		if (candidates[i] > 0)
		{
			getBullsAndCows(number, candidates[i], candidateBulls, candidateCows, k);
			if (candidateBulls != bulls || candidateCows != cows)
				candidates[i] = -1;
		}
	}
}
void printCandidates(const unsigned candidates[], size_t size, unsigned k)
{
	for (int i = 0; i < size; i++)
	{
		if (candidates[i] == -1)
			continue;

		if (getDigitsCount(candidates[i]) == k - 1)
			cout << 0;
		cout << candidates[i] << endl;
	}
}

int main()
{
    constexpr unsigned MAX_CANDIDATES_COUNT = 10 * 9 * 8 * 7 * 6 * 5; //if k = 6 this is the maximum candidates count
    unsigned candidates[MAX_CANDIDATES_COUNT];

	unsigned k;
	cin >> k;
	unsigned candidatesCount = fillAllInitialCandidates(candidates, k);

	unsigned n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		unsigned number, bulls, colls;
		cin >> number >> bulls >> colls;
		markInvalidCandidates(candidates, candidatesCount, number, bulls, colls, k);
	}
	printCandidates(candidates, candidatesCount, k);
}   
