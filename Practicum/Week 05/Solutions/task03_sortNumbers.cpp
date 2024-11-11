#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortNumbers(int& min, int& mid, int& max) {
    if(min > mid) {
        swap(min, mid);
    }
    if(mid > max) {
        swap(mid, max);
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c; //3 2 4
    sortNumbers(a, b, c); //2 3 4
    cout << a << ", " << b << ", " << c << endl;
}