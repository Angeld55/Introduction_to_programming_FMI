#include <iostream>
#include <cmath>
using namespace std;

bool isSquareRoot(int number) {
    int sqrtOfN = sqrt(number);
    if (sqrtOfN * sqrtOfN == number) {
        return true;
    }
    return false;
}

int main() {
    int input = 0;
    cin >> input;

    cout << (isSquareRoot(input) ? 
            "true" : "false") << endl;
}