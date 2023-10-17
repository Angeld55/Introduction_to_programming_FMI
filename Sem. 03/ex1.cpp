#include <iostream>

using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;

	int max = n > k ? n : k;
	int lcmCindidate = max;
	while (lcmCindidate % n != 0 || lcmCindidate % k != 0)
	{
		lcmCindidate++;
	}

	cout << lcmCindidate << endl;
}
