#include <iostream>
using namespace std;

bool isDivisableByValue(int number, int divisor) {
    if (divisor == 0) {
        return false;
    }
    
    int division = number / divisor;
    return (divisor * division == number);
}

int main() {
    int number = 0, divisor = 0;
    cin >> number >> divisor;

    cout << isDivisableByValue(number, divisor) << endl;
}