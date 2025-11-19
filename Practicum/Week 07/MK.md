# Малко контролно №2

**Задача 1.** Какво ще се случи след изпълнението на следния код:

```c++
#include <iostream>
using namespace std;

void calculate(int& a, int& b, int c) {
	a = a + b;
	c = c + b;
	b = a + c;
	a = b - a;
}

int main() {
	int x = 1, y = 2, z = 3;
	calculate(x, x, z);
	cout << x << " " << y << " " << z << endl;
}
```

**Задача 2.** Какво ще се принтира след изпълнението на програмата:

```c++
#include <iostream>
using namespace std;

void transformArr(const int arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] += arr[n - i - 1];
	}
}

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	transformArr(arr, 5);

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
}
```

**Задача 3:** Да се напише програма, която извежда всички прости числа по-малки или равни на n с помощта на Решето на Ератостен.

*n се въвежда от стандартния вход и е естествено число*