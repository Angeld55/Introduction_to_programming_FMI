# УП - Практикум 22.11.2024 Седмица 8

**Задача 1:** Да се напише функция, която приема число k, между 0 и 31 и връща 2^k.

**Пример:**

Вход:
```c++
3
```
Изход:
```c++
8
```

**Задача 2:** Да се напише функция, която приема 2 цели числа *N* и *M* и връща бита на позиция *M* в числото *N* (отзад напред, започвайки от 0).

**Пример:**

Вход:
```c++
9 2
```
Изход:
```c++
0 // 9 = 1001
```

**Задача 3:** Да се напише функция, която приема 2 цели числа *N* и *M* и връща стойността на числото *N* с променена стойност на бита на позиция *M* (отзад напред, започвайки от 0).

*Бонус: да се направи да се подава като параметър стойността на бита, която да се запази*

**Пример:**

Вход:
```c++
5 0 // Обръщаме нулевия (последния) бит на 101 -> 100
```
Изход:
```c++
4 // Вече числото е 100
```


**Задача 4:** Да се напише функция, която приема 3 цели числа *x*, *m* и *n* и връща числото, което се получава, ако от *x* се вземат *n* бита, започвайки от позиция *m*.

**Пример:**

Вход:
```c++
16 4 3
```
Изход:
```c++
4 //16 = 10000 -> |100|00 -> 100 = 4
```

**Задача 5:** Да се напише функция, която приема число и връща кодирано същото число по ключ, избран от вас. Да се напише функция, която по код на число и ключ за кодиране връща оригиналното число.

**Пример (Encode):**

Вход:
```c++
Enter a number: 10
```
Изход:
```c++
Code: 51932 //you chose key 51926
```

**Пример (Decode):**

Вход:
```c++
Enter number code: 51932
Enter key: 51926
```
Изход:
```c++
Number: 10
```

**Задача 6:** Да се напише функция, която приема 2 цели числа *a* и *b* и разменя стойностите им без допълнителна променлива с побитови операции.

**Пример:**

Вход:
```c++
5 7
```
Изход:
```c++
7 5
```

**Задача 7:** Да се напише функция, която приема 2 цели числа a и b и проверява дали битовете на a са пермутация на битовете на b.

**Пример:**

Вход:
```c++
7 11
```
Изход:
```c++
true
```