#include <iostream> 
using namespace std;
 
void init(bool* arr, size_t size, bool value)
{
    for(size_t i = 0; i < size; i++)
        arr[i] = value;
}
 
void markNotNeededNumbers(bool* arr, size_t size, int queryNumber)
{
    for(size_t i = 1; i < size; i++)
    {
        if((i % queryNumber == 0) || (queryNumber % i == 0))
            arr[i] = false;
    }
}
 
void printSolution(const bool* sieve, size_t size)
{
    for(size_t i = 1; i <= size; i++)
    {
        if(sieve[i])
            cout << i << " ";
    }
}
 
int main()
{
    size_t MAX_SIZE = 1025;
    bool sieve[MAX_SIZE];
 
    int n;
    cin >> n;
    init(sieve, n, true);
 
    int userQuery;
    cin >> userQuery;
    while(userQuery != 0)
    {
        markNotNeededNumbers(sieve, n, userQuery);
        cin >> userQuery;
    }
    printSolution(sieve, n);
 
 
    return 0;
}
