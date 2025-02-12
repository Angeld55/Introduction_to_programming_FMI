# 1. Категории
Израз наричаме последователност от операнди и променливи. Примерно:
```c
int main()
{
    int a = 5;

    a; // Това е израз
    5; // Това е израз
    a = 7; // Това е израз
    a = a + 9 * 2; // Това е израз
}
```
Всеки израз има категория. Категориите, за които ще говорим, са две:
* lvalue
    * Нарича се така, понеже може да стои от лявата страна на оператор =.
    * За нея има заделена физическа памет.
* rvalue
    * Нарича се така, понеже стои от дясната страна на оператор =.
    * За нея няма заделена физическа памет.

Примери:
```c
int main()
{
    int a;
    // Тук a е lvalue.
    // докато стойността 5 е rvalue.
    a = 5;

    // Това е невалиден израз
    5 = a;
    // Това също
    6 = 7;
}
```

Каква е категорията на израза `a = 5`? Категорията е `rvalue`. Изразът присвоява стойността 5 на променливата `a` и връща стойността 5. Това е причината изрази от този тип да са валидни:
```c
a = (b = 10);
``` 
а изрази от този тип да не са валидни
```c
(a = b) = 10;
```
# 2. Оператори за присвояване – присвояват стойност на дадена променлива 
|Оператор|Описание|  
|--|--|  
|=|Присвояване|
|+=|Прибавяне и присвояване|  
|-=|Изваждане и присвояване|  
|*=|Умножение и присвояване|  
|/=|Деление и присвояване|  
|%=|Деление по модул и присвояване|

Кой от следните три израза е валиден? Защо?

```c
int main()
{
    int a = 0;
    int b = 0;

    (a += 10) = 15;
    a = (10 += 15);
    a = (b += 10);

    // Какво ще изведе този сред след като 
    // валидният израз се изпълни?
    printf("%d, %d, %d\n", a, b, (a == b));
}
```

# 3. Преговор на логически оператори. Мързеливо оценяване.
|Оператор|  
|--|  
| && (логическо "И") |  
| \|\| (логическо "ИЛИ") |  
| ! (логическо отрицание) |  

# 4. Условни конструкции - if, if-else, if-else if
Много често е удобно, ако някое условие е изпълнено (нещо се случи), да се изпълни един код, а ако то не е изпълнено, да се изпълни друг.
Примерно, нека разгледаме следната
### Задача
Потребител въвежда от стандартния вход цяло число. Ако то е положително, се извежда числото, умножено по 10. Ако е отрицателно, се извежда съобщение за грешка.
Вече знаем как да проверим дали едно число е положително или не. Би било удобно да можем да кажем на езика:
```
Ако (a < 0), изведи a * 10, в противен случай изведи грешка.
```

Такива конструкции съжествуват във всеки език за програмиране и се наричат условни конструкции. Синтаксисът е:
```cpp
if(<условие>)
{
    <инструкции>
}
```
Можем да имаме също какво да се изпълни, ако условието не е истина:

```cpp
if(<условие>) // Условието е израз, който може да се преобразува до тип bool
{
    // Изпълни нещо
}
else
{
    // Изпълни друго нещо
}
```

Нека разгледаме как ще изглежда решението на задачата:

```cpp
#include <stdio.h>

int main()
{
    int number = 0;

    printf("Enter your number: ");
    scanf("%d", &number);

    if(number < 0)
    {
        printf("The number must be positive!\n");
    }
    else
    {
        printf("%d\n", number * 10);
    }
}
```

### Разглеждане на повече от едно условие
Нека усложним задачата. Нека сега се въвежда число, ако числото е между 2 и 6, да се извежда оценката с думи, която студентът е получил. В противен случай да се изведе съобщение за грешка. Това можем да го постигнем със следната конструкция:
```cpp
if(<условие>)
{
    // направи нещо
}
else if(<условие1>)
{
    // направи друго нещо
}
else if(<условие2>)
{
    // направи трето нещо
}
... // Можем да имаме колкото искаме else if блока
```

Решението на задачата би изглеждало по следния начин:

```c
#include<stdio.h>

int main()
{
    int number = 0;

    scanf("%d", &number);

    if(number == 2)
    {
        printf("Poor\n");
    }
    else if(number == 3)
    {
        printf("Satisfactory\n");
    }
    else if(number == 4)
    {
        printf("Good\n");
    }
    else if(number == 5)
    {
        printf("Very good\n");
    }
    else if(number == 6)
    {
        printf("Excellent\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}
```
## Кога пишем if-elseif и кога избираме да напишем няколко if конструкции

**Задача:** Да се прочете число и да се изведе на стандартния изход дали числото е по-голямо, равно или по-малко от 0.
```c
#include<stdio.h>

int main()
{
    int x = 0;
    scanf("%d", &x);
    // Първи начин - if-elseif
    if(x > 0)
    {
        printf("Entered number is bigger than zero\n");
    }
    else if(x == 0)
    {
        printf("Entered number is zero\n");
    }
    else
    {
        printf("Entered number is less than zero.\n");
    }

    // Втори начин - три if конструкции
    if(x > 0)
    {
        printf("Entered number is bigger than zero\n");
    }
    if(x == 0)
    {
        printf("Entered number is zero\n");
    }
    if(x < 0)
    {
        printf("Entered number is less than zero.\n");
    }
}
```
В този случай е по-добре да използваме if-elseif. Ако влезем в първия случай (х > 0), проверката дали х е нула няма да се извърши. Когато използваме три if-a без значение кой от тях е истина, **другите два отново ще се проверят.** Чрез първата конструкция **спестяваме проверки.**

Първата конструкция се използва, когато имаме **взаимно изключващи се случаи.** Примерно, ако х е по-голямо от нула, то то не е равно на нула и също така не е по-малко от нула. Тези случаи са взаимно изключващи се.

Ако имаме две условия, които не са взаимно изключващи се, то тогава **може да се наложи да използваме две if конструкции.**

```c 
#include<stdio.h>

int main()
{
    unsigned hours = 0;
    unsigned minutes = 0;

    scanf("%d %d", &hours, &ninutes);

    int validHours = (hours < 24);
    int validMinutes = (minutes < 60);

    if(!validHours)
    {
        printf("You entered invalid hours\n");
    }

    if(!validMinutes)
    {
        printf("You entered invalid minutes\n");
    }

    if(validHours && validMinutes)
    {
        printf("All good!\n");
    }
}
```
В този пример може часовете да са валидни, но минутите да не са. Това не са взаимно изключващи се случаи и трябва да се проверяват с две if конструкции.
# 5. Тернатен оператор
Синтаксис:
``` <условие> ? <изпълнява се ако е истина> : <изпълнява се ако е лъжа>; ```

# 6. Конструкцията switch
Конструкцията ```switch``` приема някаква променлива и в зависимост от стойността ѝ изпълнява някакъв код. Еквивалентно на конструкцията if-elseif, но различен синтаксис.

```c
#include<stdio.h>

int main()
{
	int x = 0;

	scanf("%d", &x);

	switch (x)                                                // Случаите са по стойността на х
	{
	    case 2: printf("Poor\n"); break;                      // break се слага, за да спред изпълнението на кода. Какво става
	    case 3: printf("Satisfactory\n"); break;              // aко нямаме break?
	    case 4: printf("Good\n"); break;
	    case 5: printf("Very good\n"); break;
	    case 6: printf("Excellent\n"); break;
	    default: printf("Invalid input\n");
	}
}
```

В повечето случаи, когато имаме повече условия, switch e по-бърз, поради хитра имплементация на ниско ниво. Важното обаче е случаите, изброени в case, да са известни по време на компилация.

# 7. Задачи
## 7.1
От конзолата се въвеждат ден от седмицата под формата на цяло число от 1 до 7 (1- Понеделник, 2 - Вторник , и т.н.). Нека на конзолата се изведе кой ден от седмицата е това число с думи.

Примерен вход : 3

Изход : Wednesday

## 7.2
От конзолата се въвеждат дължините на трите страни на триъгълник (реални положителни числа). Нека програмата извежда подходящо съобщение на конзолата, ако тези страни са валидни и ако не са. (Входът не е гарантирано коректен. Да се извежда различно съобщение и за него)

Примерен вход : 4.5 7 5

Изход : This triangle exists.

Примерен вход : 1 50 100

Изход : This triangle does not exist.

## 7.3
От конзолата се въвеждат три реално числа. Първото е ляв край на интервал, а второто десният му край. Да се провери дали третото число се съдържа в интервала и ако съвпада с единия му край да се изведе съобщение, че интервалът е затворен. Ако числото е в интервала да се изведе съобщение, че е в интервалът и интервалът е отворен. Ако не се намира в интервала да се изведе подходящо съобщение.

Примерен вход : 3.90 15.2 3.91

Изход : The number is within the given interval. The interval is open.

## 7.4
Програмата чете число в интервала [0..12]. Ако числото е четно програмата принтира всички четни числа по - големи или равни на числото намиращи се в интервала. Ако е нечетно принтираме всички по - големи или равни нечетни числа.

Пример:

*    Вход: 1

*    Изход: 1 3 5 7 9 11

*   Вход: 4

*   Изход: 4 6 8 10 12
