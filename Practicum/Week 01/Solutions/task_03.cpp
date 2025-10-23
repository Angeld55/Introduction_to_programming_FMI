#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cin >> num;

    int reversed = num % 10; // third digit
    reversed = reversed * 10;
    num = num / 10;

    reversed = reversed + (num % 10); // second digit
    reversed = reversed * 10;
    num = num / 10;

    reversed = reversed + (num % 10); // first digit
    
    cout << reversed;
}