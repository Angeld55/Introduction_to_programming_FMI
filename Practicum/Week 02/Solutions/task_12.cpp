#include <iostream>
using namespace std;

int main() {
    double a = 0, b = 0;
    char operation = ' ';
    cin >> a >> operation >> b;

    switch (operation) {
        case '+': cout << a + b << endl; break;
        case '-': cout << a - b << endl; break;
        case '*': cout << a * b << endl; break;
        case '/': cout << a / b << endl; break;
        default: cout << "Invalid operation!" << endl;
    }
}