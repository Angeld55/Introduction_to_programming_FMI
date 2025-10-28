#include <iostream>

int main(){
    int n;
    int sum = 0;

    while (true) {
        std::cin >> n;
        if (n == 0)
            break;     
        sum += n;     
    }
    std::cout << sum << std::endl;
}