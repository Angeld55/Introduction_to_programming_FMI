#include <iostream>
using namespace std;

int sumInIntervalSlow(int start, int finish) {
	int result = 0;
	for (int i = start; i <= finish; ++i)
		result += i;
	return result;
}

int sumInIntervalFast(int start, int finish) {
	return ((finish - start + 1) * start + ((finish - start + 1) * (finish - start) / 2));
}


int main() {

}