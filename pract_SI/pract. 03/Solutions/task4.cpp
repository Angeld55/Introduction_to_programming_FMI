#include<iostream>
using namespace std;
int main()
{
	 unsigned int m, n;
	 cout << "Number of rows: ";
	 cin >> m;
	 cout << "Number of columns: ";
	 cin >> n;

	 for (unsigned int i = 1; i <= m * n; i++)
	 {
		  cout << i << " ";
		  if (i % n == 0)
		  {
				cout << endl;
		  }
	 }

	 return 0;
}