
#include <iostream>
using namespace std;

int linearSearch(const int arr[], size_t len, int element)
{
	for (size_t i = 0; i < len; i++)
	{
		if (arr[i] == element)
			return i;
	}
	return -1;
}

int binarySearch(const int* arr, size_t size, int el)
{
    int l = 0;
    int r = size - 1;
    
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        
        if(arr[mid] == el)
            return mid;
        else if(arr[mid] > el)
        {
            r = mid - 1 ;
        }
        else //arr[mid] < el
        {
            l = mid + 1;
        }
    }
    return -1;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int* arr, size_t size)
{
    
    for(int i = 0; i < size - 1; i++)
    {
        bool isSwapped = false;
        for(int j = 0; j < size- 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if(!isSwapped)
            return;
    }
}

void print(const int* arr, size_t size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int findMin(const int* arr, size_t size)
{
    int minInd = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < arr[minInd])
            minInd = i;
    }
    return minInd;
}


void selectionSort(int* arr, size_t size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int minInd = i + findMin(arr + i,  size - i);
        if(i != minInd)
            swap(arr[i], arr[minInd]);
    }
}


//масивът е сортиран БЕЗ последния елемент
void insert(int* arr, size_t size)
{
    int el = arr[size - 1];
    int ind = size - 2;
    while(ind >= 0 && arr[ind] > el)
    {
        arr[ind + 1] = arr[ind];
        ind--;
    }
    arr[ind + 1] = el;
}

void insertionSort(int* arr, size_t size)
{
    for(int i = 1; i <= size; i++)
    {
        insert(arr, i);
    }
}
int main()
{
    int arr[] = {6,5,4,3,2,1};
    insertionSort(arr, 6);
    
    print(arr, 6);

    return 0;
}
