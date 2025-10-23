#include <iostream>
using namespace std;

int main() {
    char a = ' ', b = ' ', c = ' ', d = ' ', e = ' '; 
    cin >> a >> b >> c >> d >> e;

    char e_small = e;
    char e_capital = e;

    if (e >= 'A' && e <= 'Z') {
        e_small = e + ('a' - 'A');
    } else if (e >= 'a' && e <= 'z') {
        e_capital = e - ('a' - 'A');
    }

    if ((e >= 'A' && e <= 'Z') || (e >= 'a' && e <= 'z')) {
        if (a >= 'A' && a <= 'Z' && b >= 'A' && b <= 'Z' && a < b) {
            if (c >= 'a' && c <= 'z' && d >= 'a' && d <= 'z' && c < d) {
                bool isInA = false, isInB = false;
            
                if (e_capital >= a && e_capital <= b) {
                    isInA = true;
                }
                if (e_small >= c && e_small <= d) {
                    isInB = true;
                }
            
                bool isInUnion = isInA || isInB;
                bool isInIntersection = isInA && isInB;
                bool isInDifference = isInA && !isInB;
                bool isInOnlyOne = isInUnion && !isInIntersection;

                cout << (isInUnion ? "true" : "false") << ", ";
                cout << (isInIntersection ? "true" : "false") << ", ";
                cout << (isInDifference ? "true" : "false") << ", ";
                cout << (isInOnlyOne ? "true" : "false") << ", ";

            } else {
                cout << "Invalid input!" << endl;
            }
        } else {
            cout << "Invalid input!" << endl;
        }
    } else {
        cout << "Invalid input!" << endl;
    }
}