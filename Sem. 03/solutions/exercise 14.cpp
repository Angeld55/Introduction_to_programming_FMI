#include <iostream>
using namespace std;
#define SEPARATOR " "
int main()
{
    
    //const char SEPARATOR = ' ';
    int size;
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j <= size - i; j++)
        {
            cout << SEPARATOR;
        }


        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }


        for (int m = i - 1; m >= 1; m--)
        {
            cout << m;
        }
        cout << endl;
    }
    for (int i = 1; i < size; i++)
    {
        for (int p = 0; p < size; p++)
        {
            cout << SEPARATOR;
        }
        cout << size - i << endl;
    }

    return 0;
}
