#include <iostream>
#include <vector>
#define TEN 10
using namespace std;

/*
Example input/output:

44987434
544847
O: 8

129
329
O: 3

4332321
4232331
O: 1

987123
123
O: 6

77688988
89675421
O: 10
*/

bool checkData(int&,int&);
vector<int> createVector(int);
void swap(int&, int&);
int contains(const vector<int>&,const int digit,const size_t);
int contains(const vector<int>&,const vector<int>&, const int digit,const size_t);
unsigned leastOperations(const int n,const int k)
{
	vector<int> nDigits = createVector(n);
	vector<int> kDigits = createVector(k);
	size_t numberOfOperations = NULL;

	for (size_t i = 0; i < kDigits.size(); i++)
	{
		while (contains(kDigits, nDigits[nDigits.size() - 1], i) == -1 && nDigits.size() > i)
		{
			nDigits.pop_back();
			numberOfOperations++;
		}

		int containsDigit = contains(nDigits,kDigits, kDigits[i], i);
		if (containsDigit == i)
			continue;
		else if (containsDigit != -1)
			swap(nDigits[i], nDigits[containsDigit]);
		else
		{
			nDigits.push_back(kDigits[i]);

			if (i != nDigits.size() - 1)
			{
				swap(nDigits[i], nDigits[nDigits.size() - 1]);
				numberOfOperations++;
			}
		}

		numberOfOperations++;
	}

	numberOfOperations += nDigits.size() - kDigits.size();
	return numberOfOperations;
}

int main()
{
	while (true)
	{
		int n, k;
		cin >> n >> k;

		if (checkData)
			cout << leastOperations(n, k) << endl << endl;
	}

}

bool checkData(int &n,int &k)
{
	if (n < NULL && k < NULL)
	{
		n *= -1;
		k *= -1;
	}
	
	return(n >= NULL && k >= NULL);
}

vector<int> createVector(int number)
{
	vector<int> newVector;

	size_t powTen = 1;
	while (powTen * TEN <= number)
		powTen *= TEN;

	while (powTen > 0)
	{
		int digit = number / powTen;
		newVector.push_back(digit);
		number %= powTen;
		powTen /= TEN;
	}

	return newVector;
}

void swap(int& f, int& s)
{
	int temp = f;
	f = s;
	s = temp;
}

int contains(const vector<int> &v, int digit, size_t start)
{
	for (size_t i = start; i < v.size(); i++)
		if (v[i] == digit)
			return i; //return index

	return -1;
}

int contains(const vector<int> &nDigits,const vector<int> &kDigits, int digit, size_t start)
{
	int index = -1;
	bool firstOccurance = true;
	bool conflict;
	for (size_t i = start; i < nDigits.size(); i++)
	{
		conflict = false;
		if (kDigits.size() > i)
		{
			if (nDigits[i] == kDigits[i] && nDigits[i] == digit)
			{
				conflict = true;

				if (firstOccurance)
				{
					if (start == i)
						return index = i;

					index = i;
					firstOccurance = false;
				}
			}
		}

		if (nDigits[i] == digit && !conflict)
		{
			return index = i;
			firstOccurance = false;
		}
	}

	return index;
}

