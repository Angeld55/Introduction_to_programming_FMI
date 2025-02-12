
#### Побитови операции
прилагат върху един бит или набор от повече отделни битове на двоични числа

 - Побитово И (**&**)
 - Побитово ИЛИ  (**|**)
 - Побитово ИЗКЛЮЧВАЩО ИЛИ  (**^**)
 - Побитово отместване  (**<<** )     ( **>>**)

|        |           |
|--------|-----------|
| a      | 101010100 |
| b      | 100101110 |
| a&b    | 100000100 |
| a \| b | 101111110 |
| a^b    | 001111010 |
| a << 2 | 101010000 |
| a >> 2 | 001010101 |

Примери:

 - Функция, която с побитови операции проверява дали число е четно
 - Функция, която с побитови операции повдига 2 на степен k.

 - Изчистване на бит (да стане 0)
 - Вдигане на бит (да стане 1)
 - Връщане на стойност на бит
 - Слагане на подадена стойност на бит.

<h3>Задачи</h3>


**Задача 1:** Да се напише функция, която приема масив, в който всяко число се среща четен брой пъти с изключение на едно число, което се среща нечетен брой пъти.
Напишете функция, която приема такъв масив и връща кое е това число.

*Вход: [9 18 9 12 18 15 12], Изход: 15*


**Задача 2:** Напишете функция, която приема цяло число и връща броя на 1-ците в двоичния му запис.

*Вход: 189,  Изход: 6*

**Задача 3 :** Напишете функция, която приема цяло число и обръща най-десния бит в него, който е единица.

*Вход: 12, Изход: 8*

*Вход: 15, Изход: 14*

**Задача 4:** Напишете функция, която по подадено цяло число n и цяло число k и връща числото, което е "закодирано" в последните k бита на n.

*Вход: 15 2, Изход: 3*

*Вход: 189 3, Изход: 5*

*Вход: 189 4, Изход: 13*

**Задача 5:** Напишете функция, която приема цяло число n и цяло число k и връща дали k в двоичен запис (разглеждайки го без водещите 0-ли) е част от двоичния запис на n.

*Вход: 15 3, Изход: true*

*Вход: 13 5 Изход: true*

*Вход: 13 7, Изход: false*

**Задача 6:** Напишете функция, която приема масив(разглеждаме го като множество) и отпечатва всички негови подмножества.

*Вход: [1, 2, 3], Изход: [], [1], [2], [3], [1,2], [2,3], [1,3], [1,2,3]*

*Вход: [5, 3] Изход: [], [5], [3], [5, 3]*

