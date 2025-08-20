#include <iostream>
using namespace std;

//task 1
void print(int n)
{
    if(n % 2 == 0)
        return;
    for (int i = 0; i < n; i++) //rows
    {
        int procenctCount = (i < n / 2) ?  ((i + 1) * 2 - 1) : ((n - i) * 2 - 1); //two cases: first n/2 rows and the second n/2 rows
        int spacesCount = 2*n - 2 * procenctCount;
        for (int i = 0; i < procenctCount; i++)
            cout << "%";
        for (int i = 0; i < spacesCount; i++)
            cout << " ";
        for (int i = 0; i < procenctCount; i++)
            cout << "%";
        cout << endl;
    }
}

//task 2
int* concat(const int* arr1, size_t size1, const int* arr2, size_t size2)
{
    int* result = new int[size1 + size2];
    for (int i = 0; i < size1; i++)
        result[i] = arr1[i];
    for (int i = 0; i < size2; i++)
        result[size1 + i] = arr2[i];
    return result;
}
bool isPalindrome(const int* arr, size_t size)
{
    for (int i = 0; i < size / 2; i++)
        if (arr[i] != arr[size - i - 1])
            return false;
    return true;
}
bool isConcatPalindrome(const int* arr1, size_t size1, const int* arr2, size_t size2)
{ 
    int* concated = concat(arr1, size1, arr2, size2);
    bool result = isPalindrome(concated, size1 + size2);
    delete[] concated;
    return result;
}

//task 3
bool isLetter(char ch)
{
    return ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z';
}
size_t countLetters(const char* str)
{
    size_t count = 0;
    while (*str)
    {
        if (isLetter(*str))
            count++;
        str++;
    }
    return count;
}
char* extractLetters(const char* str)
{
    char* result = new char[countLetters(str) + 1];
    int resIter = 0;
    while (*str)
    {
        if (isLetter(*str))
            result[resIter++] = *str;
        str++;
    }
    result[resIter] = '\0';
    return result;
}
//tests
int main()
{
    print(5);

    int arr[] = { 1,2,3,2 };
    int arr2[] = { 1 };
    cout << isConcatPalindrome(arr, 4, arr2, 1) << endl;;

    char test[] = "asd23213AFSDG1!";
    char* res = extractLetters(test);
    cout << res << endl;
    delete[] res;
}
