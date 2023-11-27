#include <iostream>
using namespace std;

void init(bool arr[], size_t size, bool value)
{
    for (size_t i = 1; i < size; i++)
        arr[i] = value;
}

void printSolution(const bool[] arr, size_t size)
{
    for (size_t i = 1; i < size; i++)
        if (arr[i])
            cout << i << ' ';
}


void markNotNeededNumbers(bool[] arr, size_t size, unsigned int queryNumber)

{
    for (size_t i = 1; i < size; i++)
        if ((i % queryNumber == 0) || (queryNumber % i == 0))
            arr[i] = false;
}

int main()
{
    constexpr size_t MAX_SIZE = 1024;
    bool arr[MAX_SIZE];
    
    unsigned int n;
    cin >> n;
    init(arr, n, true);
    
    unsigned int userQuery;
    cin >> userQuery;
    while (userQuery != 0)
    {
        markNotNeededNumbers(arr, n, userQuery);
        cin >> userQuery;
    }
    printSolution(arr, n);
}
