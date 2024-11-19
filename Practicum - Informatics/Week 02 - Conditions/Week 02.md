**Задача 1:** Да се напише програма, която по дадено цяло число отпечатава с думи кой ден от седмицата е.

*Вход: 1, Изход: Monday*

*Вход: 5, Изход: Friday*

*Вход: 250, Изход: Invalid day!*

**Задача 2 (Between 100 and 200):** Да се напише програма, която по цяло число проверява дали е под 100, между
100 и 200 или над 200. Да се отпечатат съответно съобщения като в примерите по-долу:

*Вход: 95, Изход: Less than 100*

*Вход: 120, Изход: Between 100 and 200*

*Вход: 250, Изход: Greater than 200*

**Задача 3 (Speed trap):** Да се напише програма, по дадена скорост (десетично число) отпечатва
информация за скоростта. При скорост до 10 (включително) отпечатайте “slow”. При
скорост над 10 и до 50 отпечатайте “average”. При скорост над 50 и до 150 отпечатайте
“fast”. При скорост над 150 и до 1000 отпечатайте “ultra fast”. При по-висока скорост
отпечатайте “extremely fast”

*Вход: 8, Изход: slow*

*Вход: 49.5, Изход: average*

*Вход: 126, Изход: fast*

*Вход: 3500, Изход: extremely fast*

**Задача 4 (Лице на фигура):**  Да се напише програма, която по размерите на геометрична фигура пресмята
лицето й. Фигурите са четири вида: квадрат (s), правоъгълник (r), кръг (c) и триъгълник
(triangle). На първия ред на входа се чете вида на фигурата (square, rectangle, circle или
triangle). Ако фигурата е квадрат, на следващия ред се чете едно число – дължина на
страната му. Ако фигурата е правоъгълник, на следващите два реда четат две числа –
дължините на страните му. Ако фигурата е кръг, на следващия ред чете едно число –
радиусът на кръга. Ако фигурата е триъгълник, на следващите два реда четат две числа
– дължината на страната му и дължината на височината към нея.

*Вход: s 5 , Изход: 25*

*Вход: r 7 2.5, Изход: 17.5*

*Вход: c 6, Изход: 113.097*

**Задача 5 (Време + 15 минути) :** 
Да се напише програма, която по даден час и минути от 24-часово денонощие изчислява
колко ще е часът след 15 минути. Резултатът да се отпечата във формат hh:mm.
Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59.
Часовете и минутите се изписват винаги с по две цифри, с водеща
нула когато е необходимо

*Вход: 1 46, Изход: 02:01*

*Вход: 0 1, Изход: 00:16*

*Вход: 23 59, Изход: 00:14*


**Задача 6 :** 
Ще казваме, че поредица от числа е трион, ако всяко число в нея е едновременно по-голямо или равно от двата си съседа или пък едновременно по-малко или равно от тях.
За първия и последния елемент имаме само по един съсед. 
Напишете програма, която по дадени 5 на брой цели числа да се изведе
на стандартния изход "yes", ако въведената поредица е трион, или "no", в противен
случай.

*Вход: 1 5 1 0 3 , Изход: no*

*Вход: -10 10 -2 11 -22 , Изход: yes*


**Задача 7 :** 
Да се напише програма, която при подадени радиус r и двумерна точка (х, у) проверява дали точката се намира вътре/извън или по контура на окръжност с център (0,0).

*Вход: 5 0 5, Изход: On the circle*

*Вход: 5 10 30, Изход: Out of the circle*

*Вход: 5 0 2, Изход: In the circle*

**Задача 8:** Имате 2 числа - ден и месец от невисокосна годината. Да се изведе следващата дата. 

*(Помислете и за валидация на данните. За домашно опитайте да добавите и годината)*

**Пример:**

Вход:
```c++
31 3
```

Изход:
```c++
1 4
```

**Задача 9:** Създайте калкулатор, поддържащ операциите +, -, *, / на две реални числа. Имате число, операция и второ число и се извежда резултатът. 

*(Спазвайте правилата в математиката!)*

**Пример:**

Вход:
```c++
2.5 * 4
```

Изход:
```c++
10
```

**Задача 10:** Да се напише програма, която получава 5 латински букви. Първите две от тях са главни и образуват множеството A, където A съдържа всички букви между въпросните две букви, включително самите тях. Вторите две букви са малки и образуват множеството B, където B съдържа всички букви между тях, включително самите тях.

Четем 5-та буква (case insensitive). Да се изведе:

* Дали 5-тата буква принадлежи на обединението на A и B.
* Дали 5-тата буква принадлежи на сечението на A и B.
* Дали 5-тата буква принадлежи на разликата на A с B.
* Без да използвате допълнителни проверки (освен резултатите от предните три условия) определете дали 5-тата буква принадлежи само и единствено в някое от множествата A или B. 
  
*(Да се похвалите после по ДСТР, че сте решили последната подточка* 😎 *)*

**Пример:**

Вход:
```c++
A E c e e
```

Изход:
```c++
true, true, false, false
``` 