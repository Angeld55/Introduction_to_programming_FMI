#include <iostream>
using namespace std;

int main(){
    int n, k;
	cin >> n >> k;
	int max = n > k ? n : k;

	int lcmCandidate = max;

	while (lcmCandidate % n != 0 || lcmCandidate % k != 0) {
		lcmCandidate += max;
	}

	cout << lcmCandidate << endl;
}