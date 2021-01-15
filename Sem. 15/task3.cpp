#include <iostream>
using namespace std;

//Зад1. Даден е символен низ (стринг). Сортираме думите лексикографски.

// Вход: hello friends. how are you
// Изход: are friends. hello how you

// зад2. Даден е символен низ (стринг). Вярно ли е, че съдържа еднакви думи?

// зад3. Дадени са два сортирани масива от цели числа.
// Реализрайте функция, която приема двата масива и връща нов сортиран масив с елементите от двата масива.

// Пример:
//  Масив1 :  4 8 10 66 70 
//  Масив2 : 2 9 11 14
// Резултат: 2 4 8 9 10 11 14 66 70

//	1 начин - конкатенираме двата масива и прилагаме сортировка.
//  Губим предимството, че двата масива са били сортирани

//2 начин- 
void merge(const int* arr1, int len1, const int* arr2, int len2,  int* result)
{
	int ind1 = 0, ind2 = 0, resultIndex;

	while (ind1 < len1 && ind2 < len2)
	{
		if (arr1[ind1] <= arr2[ind2])
			result[resultIndex++] = arr1[ind1++];
		else
			result[resultIndex++] = arr2[ind2++];
	}

	while (ind1 < len1)//Ако е приключил първо вторият масив
		result[resultIndex++] = arr1[ind1++];

	while (ind2 < len2)//Ако е приключил първо първият масив
		result[resultIndex++] = arr1[ind2++];

}
int main()
{
	int len1, len2;
	cin >> len1 >> len2;

	int* arr1 = new int[len1]; // (*)
	int* arr2 = new int[len2]; // (**)
	cout << "Enter SORTED array 1:" << endl;

	for (int i = 0; i < len1; i++)
		cin >> arr1[i];

	cout << "Enter SORTED array 2:" << endl;

	for (int i = 0; i < len2; i++)
		cin >> arr2[i];

	int* result = new int[len1 + len2]; // (***)

	merge(arr1, len1, arr2, len2, result);

	for (int i = 0; i < len1 + len2; i++)
		cout << result[i] << " ";

	delete[] arr1, arr2, result; // (*) (**) (***)
}
