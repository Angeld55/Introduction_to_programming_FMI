#include <iostream>
using namespace std;
void print(int N, char S = ' ')
 {
     for (size_t i = 0; i < N; i++)
     {
         cout << S;
     }
 }

int main()
{
    int N;
    char S;
    cin >> N >> S;
    print(N);
    cout<< "Error!" << endl;
    print(N, S);
    return 0;
}