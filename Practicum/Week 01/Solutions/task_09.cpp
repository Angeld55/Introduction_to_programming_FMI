#include <iostream>

using namespace std;

int main() {
    int money;
    cin >> money;
        
    int hundred = money / 100;
    cout << hundred << "x100 lv" << endl;
    money = money % 100;
    
    int fifty = money / 50;
    cout << fifty << "x50 lv" << endl;
    money = money % 50;
    
      
    int twenty = money / 20;
    cout << twenty << "x20 lv" << endl;
    money = money % 20;
    
    int ten = money / 10;
    cout << ten << "x10 lv" << endl;
    money = money % 10;
    
    int five = money / 5;
    cout << five << "x5 lv" << endl;
    money = money % 5;
    
    int two = money / 2;
    cout << two << "x2 lv" << endl;
    money = money % 2;
    
    cout << money << "x1 lv" << endl;
}
