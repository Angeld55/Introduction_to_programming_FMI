#include <iostream>
using namespace std;

int main()
{
	int hours, mins;
	cin >> hours >> mins;

	(mins += 15) %= 60;

	if (mins < 15)
		(hours+=1)%=24;

	if (hours <= 9)
		cout << 0;
	cout << hours << ":";
	
	if (mins <= 9)
		cout << 0;
	cout << mins << endl;
}
