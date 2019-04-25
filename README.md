  ## Домашнее задание 4. CMake.
Условие:

* Выполните сформулированное ниже задание, используя любую из интегрированных сред разработки. Результатом реализации части a задания должна быть статическая библиотека, а части b — программа, использующая библиотеку. Структура каталога проекта должна быть такой, как изображена на втором рисунке. Настройте проект приложения таким образом, чтобы в модуле ```rational_poly.cpp``` можно было подключать заголовочный файл библиотеки директивой:
![Рис. 1](Homework%204/pictures/1.jpg)

  * a) Операции с рациональными числами: сокращение, сложение, вычитание, умножение, деление, сравнение.
  
  * b) Для заданного многочлена с рациональными коэффициентами:
  ![Полином](Homework%204/pictures/poly.jpg)
  
  и двух чисел ```q_1, q_2 ∈ Q``` определить, какое из значений больше: ```P_n(q1)```  или ```P_n(q2)``` . Вычисление значения многочлена производить по схеме [Горнера](https://ru.wikipedia.org/wiki/Схема_Горнера).

* Требования к реализации: 
  * Реализовать построение вне каталога проекта, устанавливая соответствующие настройки в интегрированной сред 
  * Части a и b задания должны быть оформлены в виде отдельных проектов (располагаться в разных каталогах системы). 
  * Проект библиотеки должен иметь возможность создавать как статический, так и динамический/разделяемый вариант. 
  * Проект библиотеки должен содержать описание целей тестирования и установки. Установка должна поддерживать компоненты для обычного пользователя и для разработчика. 
  * Структура каталога установки должна быть аналогичной структуре, приведённой на рисунке 2
  ![Рис. 2](Homework%204/pictures/2.jpg)
  * Проект библиотеки должен содержать описание интерфейсных настроек, применяемых к зависимым проектам. 
  * Проект приложения должен подключать библиотеку, используя её сценарий, сгенерированный во время установки. Для этого проект приложения должен иметь кэш-настройку, определяющую путь к каталогу установки библиотеки.
  
Проверьте работоспособность собираемой программы для различных доступных операционных систем и компиляторов.  

Решение:

  * rational_poly [implementation](Homework%204/rational_poly/rational_poly.cpp)/[CMake](Homework%204/rational_poly/CMakeLists.txt)
  * lib_rational [header](Homework%204/lib_rational/lib_rational.h)/[implementation](Homework%204/lib_rational/lib_rational.cpp)/[CMake](Homework%204/lib_rational/CMakeLists.txt)
  * program [CMake](Homework%204/CMakeLists.txt)
  * [bat-файл](Homework%204/build.cmd) для сборки
  
  ## Домашнее задание 3. Makefile.
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
  
   * файлы [hello.cpp](Homework%203/hello.cpp), [here.cpp](Homework%203/here.cpp), [bye.cpp](Homework%203/bye.cpp), [mylib.h](Homework%203/mylib.h).
   
   * [Makefile](Homework%203/MakeStaticLibrary) для **статической** библиотеки.
   
   * [Makefile](Homework%203/MakeDynamicLibrary) для **динамической** библиотеки.
    

## Домашнее задание 2. Class.
Условие:

  Необходимо **реализовать** класс STUDENT:
  
   **Private members** of class student:
```
 admno                       integer
 sname                       20 character
 eng. math, science          float
 total                       float
 ctotal()                    a function to calculate eng + math + science with float return type. 
``` 
  **Public member** function of class student:
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
