#include <iostream>
using namespace std;

int lcm(int first, int second){
    if(first == 0 || second == 0)
    {
        return 0;
    }
    int lcmCandidate = (first > second)? first: second;


    while(true){
        if(lcmCandidate% first != 0 || lcmCandidate % second != 0)
        {
            return lcmCandidate;
        }
        lcmCandidate ++;
    }
    
}