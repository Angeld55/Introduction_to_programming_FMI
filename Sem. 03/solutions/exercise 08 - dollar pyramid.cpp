#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= i; j++) 
            cout << "$" << " "; // print as many dollars as the number of the current row
        
        cout << endl;
    }
    
    return 0;
}
