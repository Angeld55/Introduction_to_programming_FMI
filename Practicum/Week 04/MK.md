# Малко контролно №1

**Задача 1.** Какво ще се случи при компилация на следния код:
```c++
#include <iostream>
using namespace std;

int main() {
    int number = 2;
    
    if (number < 2) {
        cout << "less than" << number << endl;
    }
    else if (number = 0) {
        cout << "equal to " << number << endl;
    }
    else if (number >= 2) {
        cout << "more than " << number << endl;
    }
    else {
        cout << "unknown " << number << endl;
    }
}
```
**Задача 2.** Какво ще се случи при компилация на следния код:
```c++
#include <iostream>
using namespace std;

int findSum(int n) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        sum += i;
    }

    return sum;
}

int main() {
    int n = 0;
    cin >> n;
    
    cout << findSum(n);
}
```

**Задача 3.** Какво ще се случи при компилация на следния код:

```c++
char evaluate(int num) {
    switch(num % 5) {
        case 0: return 'A'; break;
        case 1: return 'B';
        case 2: return 'C'; break;
        case 3: num += 7; return 'D';
        case 4: return 'E';
        default: return 'F';
    }
    return ' ';
}

int main() {
    int x = 27;
    char letter = evaluate(x);

    cout << letter << ' ' << x;
}
```

**Задача 4.** Напишете програма, която въвежда две **цели положителни** числа и извежда:
* техния най-голям общ делител;
* дали този делител е просто число. 

**Пример:**

Вход:
```c++
14 
21
```
Изход:
```c++
7
true
```