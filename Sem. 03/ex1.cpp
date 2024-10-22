#include <iostream>

using namespace std;
int main()
{
	unsigned int n, k;
	cin >> n >> k;

	unsigned max = n > k ? n : k;
	unsigned lcmCindidate = max;
	while (lcmCindidate % n != 0 || lcmCindidate % k != 0)
	{
		lcmCindidate += max;
	}

	cout << lcmCindidate << endl;
}
