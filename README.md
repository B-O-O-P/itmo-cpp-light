  ## Домашние задание 3. Makefile.
Условие:

* Напишите простые файлы  ```hello.cpp```, ```here.cpp```, ```bye.cpp```, ```mylib.h``` . В ```hello.cpp```, функция должна выводить

```c++
"Hello!"
```

В  ```here.cpp``` , другая функция должна выводить 

```c++
"I am here!"
```

Eще одна функция должна выводить 

```c++
"Bye bye!"
```
В  ```bye.cpp```. 

```mylib.h``` должен содержать объявления  всех трех функций 
* Напишите ```main.cpp```, который вызывает все три функции, результатом работы программы является

```c++
"Hello!" 
"I am here!"
"Bye bye!"
```

В файле ```main.cpp``` нет операторов вывода 
* Напишите **Makefile**, который компилирует все файлы  и строит статическую библиотеку ```mylib.a```, содержащую ```hello.cpp```, ```here.cpp```, ```bye.cpp```, но не ```main.cpp```
* Напишите **Makefile**, который компилирует все файлы  и строит динамическую библиотеку с soname библиотеки ```libmylib.so.5.```  Установите  minor версию ```.1``` и релиз ```.10.``` Таким образом вы получите динамическую библиотеку с именем файла ```libmylib.so.5.1.10``` c установленными ```.so ```ссылками 
    
Решение:
  
   * файлы [hello.cpp](Homework%203/hello.cpp),[here.cpp](Homework%203/here.cpp),[bye.cpp](Homework%203/bye.cpp).
   
   * [Makefile](Homework%203/MakeStaticLibrary) для **статической** библиотеки.
   
   * [Makefile](Homework%203/MakeDynamicLibrary) для **динамической** библиотеки.
    

## Домашнее задание 2. Class.
Условие:

  Необходимо **реализовать** класс student:
  
   **Private members** of class student:
```
 admno                       integer
 sname                       20 character
 eng. math, science          float
 total                       float
 ctotal()                    a function to calculate eng + math + science with float return type. 
``` 
  **Public member** function of class student
```  
  Takedata()                 Function to accept values for admno, sname, eng, science and invoke ctotal() to calculate total.
  Showdata()                 Function to display all the data members on the screen 
```
  Необходимо реализовать класс REPORT
  **Private members** of class report:
```  
  adno                       4 digit admission number
  name                       20 characters
  marks                      an array of 5 floating point values
  average                    average marks obtained
  GETAVG()                   a function to compute the average obtained in five subject
```
  **Public member** function of class report:
```
  READINFO()                 function to accept values for adno, name, marks. Invoke the function GETAVG()   
  DISPLAYINFO()              function to display all data members of report on the screen.   
```

Решение:

  * Student [header](Homework%202/Student.h)/[implementation](Homework%202/Student.cpp)

  * Report  [header](Homework%202/Report.h)/[implementation](Homework%202/Report.cpp)
 
  ## Домашнее задание 1. Intro.
Условие:

  * Write  a Program to demonstrate functions.

  * Write  a Program to demonstrate function overloading.

  * Write  a Program to demonstrate default arguments.

  * Write  a Program to demonstrate pass by value, pass by reference and return by reference.

  * Write  a Program to demonstrate classes and objects.

  * Write  a Program to demonstrate  constructors.
  
[Решение](Homework%201/main.cpp)
