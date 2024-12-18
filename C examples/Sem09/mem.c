#include <stdio.h>
#include <stdlib.h>

unsigned getEvenCount(const int* arr, size_t size)
{
 int count = 0;
 for (int i = 0; i < size; i++)
 {
 if (arr[i] % 2 == 0)
 count++;
 }
 return count;
}


void printArr(const int* arr, size_t size)
{
 for (int i = 0; i < size; i++)
 printf("%d ", arr[i]);
 printf("\n");
}
//функция за добавяне на елемент в масив по индекс

void putElementAtIndex(int** arr, size_t* size, int el, int ind)
{
 printArr(*arr, *size);

 int* newArr = realloc(*arr, sizeof(int) * (*size) + 1); //увеличава размера на масива с 1
 if (newArr == NULL)
 {
 (*size) = 0;
 free(arr);
 return;
 }
 (*arr) = newArr;

 printArr(*arr, *size);
 (*size)++;
 for (int i = (*size) - 1; i > ind; i--)
 (*arr)[i] = (*arr)[i - 1];
 (*arr)[ind] = el;
}

void extractEvenAndOdd(const int* arr,
    int arrSize,
    int** evenArr, //указател към указателя, който искате да промените!! 
    int* evenCount,
    int** oddArr,  //указател към указателя, който искате да промените!! 
        int* oddCount)
{
 (*evenCount) = getEvenCount(arr, arrSize);
 (*oddCount) = arrSize - (*evenCount);

 (*evenArr) = calloc((*evenCount), sizeof(int));
 (*oddArr) = calloc((*oddCount), sizeof(int));

 int evenIndex = 0, oddIndex = 0;

 for (int i = 0; i < arrSize; i++)
 {
 if (arr[i] % 2 == 0)
 (*evenArr)[evenIndex++] = arr[i];
 else
 (*oddArr)[oddIndex++] = arr[i];
 }
}

int main() 
{
 int* arr = calloc(4, sizeof(int));
 arr[0] = 1;
 arr[1] = 1;
 arr[2] = 2;
 arr[3] = 2;

 size_t size = 4;
 putElementAtIndex(&arr, &size, 0, 1);
 printArr(arr, 5);

 /*
 int* evenArr = NULL;
 int evenCount = 0;

 int* oddArr = NULL;
 int oddCount = 0;

 extractEvenAndOdd(arr, 5, &evenArr, &evenCount, &oddArr, &oddCount);

 printArr(evenArr, evenCount);
 printArr(oddArr, oddCount);

 free(evenArr);
 free(oddArr);
 */
 return 0;
}
