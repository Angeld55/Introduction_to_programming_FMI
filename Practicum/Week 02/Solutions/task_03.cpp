#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cin >> num;

    switch (num) {
        case 2: cout << "Fail"; break;
        case 3: cout << "Poor"; break;
        case 4: cout << "Average"; break;
        case 5: cout << "Very good"; break;
        case 6: cout << "Excellecnt"; break;
        default: cout << "Invalid grade!";
    }
}