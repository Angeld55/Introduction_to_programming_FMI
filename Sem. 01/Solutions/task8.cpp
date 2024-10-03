#include <iostream>
using namespace std;

int main()
{
  int a;
  int b;
  cin >> a >> b;
  
  bool isFirstBigger = a > b;
  
  cout << a * isFirstBigger + b * !isFirstBigger;
}
