#include <iostream>
#include "Unit.h"
#include "TemplatedCompare.hpp"
#include "isSameObject.hpp"
#include "Man.h"
#include "Bear.h"
#include "Pig.h"
#include "ManBearPig.h"

typedef int (*Input)(double);//Функция принимащая double и возвращающая int
typedef int* (*Output)(char const*);//Функция принимающая char const* и возвращающая int*
typedef Output (*ComplexFunction)(int, Input);
//typedef int* (*(*ComplexFunction)(int, int(*)(double)))(char const*); - СЛОЖНО


int main() {
    Unit unit(1);
    std::cout << "Here is a first unit with id: " << unit.getId() << "\n";


    Man man("HELLO", 2);
    std::cout << "Here is a man with id " << man.getId() << " and he talks: " << man.talk() << "\n";


    Bear bear(5, 3);
    std::cout << "Here is a bear with id " << bear.getId()
              << " and it has claws of length: " << bear.lengthOfClaws() << "\n";


    Pig pig("GRU GRU GRU", 4);
    std::cout << "Here is a pig with id " << pig.getId() << " and it grunts: " << pig.grunt() << "\n";


    ManBearPig manBearPig("SMASH!", "GRUAH GRUAH!", 10, 5);
    std::cout << "BUT NOW HERE IS a ManBearPig with id " << manBearPig.getId()
              << " and he talks: " << manBearPig.talk() << "\nAnd grunts: " << manBearPig.grunt()
              << "\nAnd he has long claws of length: " << manBearPig.lengthOfClaws() << "!\nRUN!\n\n";


    std::string s1("Elf");
    std::string s2("Archer");

    std::cout << "And now here are only Elf and Archer,let`s compare them:\nIs Elf bigger than Archer?: "
              << (compare(s1, s2, &std::string::size) ? "YES" : "NO")
              << "\nBut is Elf bigger than himself?: "
              << (compare(s1, s1, &std::string::size) ? "YES" : "NO") << "\n\n";



    D d, e;
    A* d1 = &d;//|A|C|   |A|B|C|
    A* d2 = (C*) &d;
    A* e2 = (C*) &e;
    std::cout << "Here are 2 illusions of ManBearPig, let`s find true one!\nIs this true one? "
              << (isSameObject(d1, e2) ? "YES" : "NO") << "\nHow about this one? "
              << (isSameObject(d1, d2) ? "YEAH" : "NOPE");


    return 0;
}