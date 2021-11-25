# Указатели. Символни низове.

## Въведение в указателите.

   ```c++
   int arr[] = {1, 2, 3};
int* ptr = arr;
```

![enter image description here](https://i.ibb.co/cDcX8st/Untitled-Diagram-drawio-3.png)
   ```c++
	ptr++;
	cout << ptr[0]; //2;
	cout << ptr[1]; //3;
```

 ![enter image description here](https://i.ibb.co/xLLsVK5/Untitled-Diagram-drawio-4.png)

## Въведение в символните низове (стрингове).

   ```c++
	char str[] = {'t', 'e', 's', 't', '\0'};
	char str2[] = "test"; //equivalent to str
	char str3[7] = "test"; 
```

![enter image description here](https://i.ibb.co/ZmRwt6R/Untitled-Diagram-drawio-5.png)

Примерна имплементация на:

 - strlen (намиране на дължина на стринг)
 - strcpy (копиране на стринг)
 - strcat (конкатениране на стрингове)
 - strcmp (лексикографско сравнение на стрингове)
 - atoi (преобразуване на стринг в число)
 - търсене в текст
 - броене на срещанията на конкретен символ в текст


