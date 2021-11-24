/*
A iterative binary search function.
It returns location of x in given array arr[l..r] if present,
otherwise -1.
*/

//int l - left side index
//int r - right side index
//int m - middle index
//int x - number 'x' we are searching for

int binarySearch1(const int *arr, int l, int r, int x)
{
    while (l <= r)
	{
        int m = l + (r - l) / 2;
        if (arr[m] == x)// Check if x is present at mid
			return m;
        if (arr[m] < x)// If x greater, ignore left half
			l = m + 1; 
        else 
			r = m - 1; // If x is smaller, ignore right half
    }
    return -1; // if we reach here, then the element was not present
}