#include <iostream>
using namespace std;

int main() 
{

    int n;
    cin >> n;

    // print the first part of the pyramid (the one going from 1 to n(n-1)...21)
    
    for(int i = 1; i <= n; i++) 
    {
        for(int k = n - i - 1; k >= 0; k--) 
            cout << " "; // print the spaces
        
        for(int j = i; j >= 1; j--) 
            cout << j; // print numbers j(j - 1)...21
        
        cout << endl;
    }
    // print the second part of the pyramid (the one going from (n-1)...21 to 1
    
    for(int i = n - 1; i >= 1; i--) 
    {
        for(int k = n - i - 1; k >= 0; k--) 
            cout << " ";
        
        for(int j = i; j >= 1; j--) 
            cout << j;
        
        cout << endl;
    }

    return 0;
}
