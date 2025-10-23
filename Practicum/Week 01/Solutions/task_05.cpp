#include <iostream>
using namespace std;

int main() {
    int grade = 0;
    cin >> grade;

    bool isValid = (grade == 2) || (grade == 3) || (grade == 4) || (grade == 5) || (grade == 6);

    cout << isValid;
}