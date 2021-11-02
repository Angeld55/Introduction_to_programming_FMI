#include <iostream>
using namespace std;
bool isZero(const int number)
{
    return (number == 0);
}

bool isEven(const int number)
{
    if (isZero(number))
    {
        return false;
    }
    return !(number % 2);
}

int main()
{
    int n;
    cin >> n;
    cout << boolalpha << isEven(n) << endl;
    return 0;
}