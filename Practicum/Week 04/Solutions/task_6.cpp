#include <iostream>
using namespace std;

int getLength(int number){

    if(number == 0)
    {
        return 1;
    }
    int result = 0;
    while(number != 0){
        number/=10;
        result++;
    }
    return result;
}