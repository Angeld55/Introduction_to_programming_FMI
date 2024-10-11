## Мини тест 11.10.2024г.

**Въпрос 1:** Какво ще се изведе на конзолата?

```c++
#include <iostream>
using namespace std;

int main()
{
    int number = 2;
    
    if (number < 2)
        cout << "first";
    else if (number = 0)
        cout << "second";
    else if (number >= 2)
        cout << "third";
    else
        cout << "unknown";
}
```

**Въпрос 2:** Какво ще се изведе след изпълнение на кода?

```c++
#include <iostream>
using namespace std;

int main()
{
    int num = 25;

    if (25 == (++(--(++num)))) {
        cout << "first";
    }
    else if (27 == +num) {
        cout << "second";
    }
    else if (26 == num--) {
        cout << "third";
    }
    else if (26 == ++num) {
        cout << "fourth";
    }
    else {
        cout << "fifth";
    }
}
```

**Въпрос 3:** Ще има ли разлика след изпълнение на двете програми?

***Bonus:** А коя е по-оптимална (бърза)?*

```c++
#include <iostream>
using namespace std;

int main()
{
    int grade;
    cin >> grade;
    if (grade == 2)
        cout << "fail";
    else if (grade == 5)
        cout << "nice";
    else if (grade == 6)
        cout << "excellent";
    else
        cout << "error";
}
```

```c++
#include <iostream>
using namespace std;

int main()
{
    int grade;
    cin >> grade;
    switch(grade)
    {
        case 2: cout << "fail"; break;
        case 3:
        case 4:
        case 5: cout << "nice"; break;
        case 6: cout << "excellent"; break;
        default: cout << "error";
    }
}
```