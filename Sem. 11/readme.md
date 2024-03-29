## Динамична памет
**stack**
- паметта се заделя ПОВРЕМЕ на компилация на програмата.
- паметта се освобождава/трие/маркира като свободна автоматично - при излизането от scope-а,  в който е дефинирана.

Искаме памет по време на изпълнението на програмта?
**heap** 
 - Масиви и обекти без предварително да е известна големината.


Оператор **new**

- Връща указтел към началото на паметта

```c++
new int[n];  n НЕ е задължително да е константа!
```

Заделянето на динамична памет е много "бавна" операция!!

Динамична памет НЕ се трие автоматично.

Оператор delete[] - освобождава/маркира като свободна динамична памет!


```c++
void f()
{
  int x = 40;
  char ch[2] = {'a', 'b'};
  int* ptr = new int[3];
}
```

![enter image description here](https://i.ibb.co/vYdR6Zj/dyn-mem.png)

След приключването на функцията ще се изчисти паметта в стека, но НЕ и паметта в heap-а.

За това ние трябва ръчно да я маркираме като свободна.

```c++
void f()
{
  int x = 40;
  char ch[2] = {'a', 'b'};
  int* ptr = new int[3];
  delete[] ptr; //!!!!!!!
}
```

Примери:

 - Да се напише функция, която приема стринг и връща нов стринг с ТОЧНА ГОЛЕМИНА, в който всички числа са цензурирани. (Всяко число е заменено с '*')
 - Да се напише функция, която приема стринг и връща два стринга с ТОЧНА големина. Първият да бъде съставен само от малките букви, а другият да бъде съставен само от главните букви.
 - Да се напише функция, която приема масив от целия числа, който е получен след конкатенация на два сортирани масив, и го сортира.
 - Да се напише функция, която приема стринг и връща нов стринг с точна големина, който е съставен от малките латински букви на подадения, но в сортиран вид.
<h3>Задачи</h3>

**Задача 1:** Решете 4-та задача от примерните, но приемете, че числата в масивите са в интервала [-100, 100].

**Задача 2:** Напишете функция, която приема масив от цели числа и цяло число и елемент на масива. Функцията да преподрежда елементите, така че всички по-малки елементи от подадения да са в ляво от него, а всички по-големи - в дясно. (Забележка: Задачата да се реши с помощта на допълнителен масив - същестува и решение без допълнителна памет (Hoare's partition, Lomuto partition и други), но то не се изисква)

*Вход: [1, 5, 6, 3, 0, -1, 2, 9, 7] ,3* *Изход: [1, 0, 2, ,-1, 3, 6, 5, 9, 7]*


**Задача 3:** Напишете функция, която приема масив и връща масив от масиви, на който елементите му са всички непразни подмасиви на дадения.

*Вход: [1, 2, 3]* 

*Изход: [1], [2], [3], [1, 2], [2, 3], [1, 3], [1, 2, 3]*
