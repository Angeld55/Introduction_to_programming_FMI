#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    
    int middle = 0;
    cout << a + b + c 
        - (a > b ? (a > c ? a : c) : (b > c ? b : c))
        - (a < b ? (a < c ? a : c) : (b < c ? b : c));
}