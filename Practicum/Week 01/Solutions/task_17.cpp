#include <iostream>

using namespace std;

int main() {
    int seconds;
    std::cin >> seconds;

    int days = seconds / (24 * 3600); 
    seconds %= (24 * 3600);   

    int hours = seconds / 3600;
    seconds %= 3600;

    int minutes = seconds / 60;
    seconds = seconds % 60;

    std::cout << days << " days, " << hours << " hours, "
              << minutes << " minutes, " << seconds << " seconds";
}
