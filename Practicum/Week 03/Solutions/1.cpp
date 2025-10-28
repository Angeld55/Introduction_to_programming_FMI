#include <iostream>

int main(){
    int n, k;
	std::cin >> n >> k;
	int max = n > k ? n : k;
	int lcmCandidate = max;
	while (lcmCandidate % n != 0 || lcmCandidate % k != 0)
		lcmCandidate += max;
	std::cout << lcmCandidate << std::endl;
}