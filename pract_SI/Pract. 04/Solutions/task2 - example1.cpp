#include <iostream>
using namespace std;

bool isEven(int number)
{
    return !(number % 2);
}

int main()
{
    int n;
    cin >> n;
    cout << boolalpha << isEven(n) << endl;
    return 0;
}