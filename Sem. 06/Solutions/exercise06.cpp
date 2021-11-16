#include <iostream>

using namespace std;

int findMax(int a, int b)
{
    return a > b ? a : b;
}

int findMin(int a, int b)
{
    return a > b ? b : a;
}

void findMinMissing(int arr[], unsigned n)
{
    int startIndex = 0;
    int endIndex = n - 1;

    int result = 100000;

    while (startIndex <= endIndex)
    {
        int midIndex = startIndex + (endIndex - startIndex) / 2;

        if (midIndex + 1 < n)
            if (arr[midIndex] + 1 < arr[midIndex + 1])
            {
                result = findMin(arr[midIndex] + 1, result);
            }
        if (midIndex - 1 >= 0)
            if (arr[midIndex] - 1 > arr[midIndex - 1])
            {
                result = findMin(arr[midIndex] - 1, result);
            }
        if (arr[midIndex] - arr[startIndex] > midIndex - startIndex)
        {
            endIndex = midIndex - 1;
        }
        else if (arr[endIndex] - arr[midIndex] > endIndex - midIndex)
        {
            startIndex = midIndex + 1;
        }
        else
            break;
    }

    cout << result << endl;
}

void findMaxMissing(int arr[], unsigned n)
{
    int startIndex = 0;
    int endIndex = n - 1;

    int result = 0;

    while (startIndex <= endIndex)
    {
        int midIndex = startIndex + (endIndex - startIndex) / 2;

        if (midIndex + 1 < n)
            if (arr[midIndex] + 1 < arr[midIndex + 1])
            {
                result = findMax(arr[midIndex] + 1, result);
            }
        if (midIndex - 1 >= 0)
            if (arr[midIndex] - 1 > arr[midIndex - 1])
            {
                result = findMax(arr[midIndex] - 1, result);
            }
        if (arr[endIndex] - arr[midIndex] > endIndex - midIndex)
        {
            startIndex = midIndex + 1;
        }
        else if (arr[midIndex] - arr[startIndex] > midIndex - startIndex)
        {
            endIndex = midIndex - 1;
        }
        else
            break;
    }

    cout << result << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[500];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    findMinMissing(arr, n);
    // findMaxMissing(arr, n);
}