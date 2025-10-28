#include <iostream>
using namespace std;

int main() {
            int n;
			std::cin>> n;

			if (n == 0)
				std::cout << "False";
			else {
				int copyOfN = n;
				while (copyOfN %2 == 0) {
					copyOfN /= 2;

				}
				if (copyOfN == 1)
					std::cout << "True";
				else
					std::cout << "False";

			}

}