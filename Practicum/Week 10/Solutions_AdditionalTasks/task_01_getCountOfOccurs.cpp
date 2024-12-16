#include <iostream>
using namespace std;

int getCountOfOccurs(const char* str, char ch) {
    if (!str) {
        return -1;
    }
    int count = 0;

    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {

}