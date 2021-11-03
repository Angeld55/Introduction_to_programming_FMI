#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	 string card_number;

	 cout << "Card number: ";
	 cin >> card_number;

	 cout << "Hidden card number: " << setfill('X') << setw(13)
		  << card_number[12] << card_number[13] << card_number[14] << card_number[15] << endl;

	 return 0;
}