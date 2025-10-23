#include <iostream>
using namespace std;

int main() {
    int dividend = 0, divisor = 0;
    cin >> dividend >> divisor;

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    cout << "Divison quotient: " << quotient << endl
         << "Divison remainder: " << remainder;
}