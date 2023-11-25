#include <iostream>
using namespace std;

int binarySearchEvenOddArr(const unsigned arr[], size_t len)
{
	int left = 0;
	int right = len - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		
        if(arr[mid] == 0)
            return mid;
            
		if (arr[mid] % 2 == 0)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}


int main()
{
    {
        constexpr size_t size = 5;
        
        unsigned arr[] = {2,0,3,5,7,9,1};
        cout << "Zero at index: " << binarySearchEvenOddArr(arr, size) << endl;
    }    
    {
        constexpr size_t size = 5;
        
        unsigned arr[] = {2,4,5,5,5,5,5,5,5,5,3};
        cout << "Zero at index: " << binarySearchEvenOddArr(arr, size) << endl;
    }   
}
