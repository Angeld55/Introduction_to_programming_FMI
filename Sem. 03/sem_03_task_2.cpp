#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
    cin >> num1 >> num2;
    
    for (int i = num1; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << i;
            if (i != 1)
                cout << " ";
        }
    }
    
    cout << endl;
    return 0;
}
