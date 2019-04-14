#include <iostream>
#include "Complex.h"

void complete() {
    std::cout << "\nCompleted\n\n";
}

int main() {
    std::cout << "Testing overloaded operators...";
    Complex original;

    Complex first = Complex(int((rand() * 20) / RAND_MAX),
                            int((rand() * 20) / RAND_MAX));

    Complex second = Complex(int((rand() * 20) / RAND_MAX),
                             int((rand() * 20) / RAND_MAX));
    std::cout << "\nTest 1: \"istream>>\" and \"ostream<<\":\ncin: ";

    std::cin >> original;

    std::cout << "cout: " << original;

    complete();


    std::cout << "\nTest 2: \"=\" and unary \"+\",\"-\" :\n";

    std::cout << "First argument: " << first;

    std::cout << "\nSecond argument: " << second << "\n";

    first = second;

    std::cout << "\nAfter \"first = second\":\n";

    std::cout << "First argument: " << first;

    std::cout << "\nSecond argument: " << second;

    std::cout << "\n\"+(first)\": " << +(first);

    std::cout << "\n\"-(first)\": " << -(first);

    complete();


    first = Complex(int((rand() * 20) / RAND_MAX),
                    int((rand() * 20) / RAND_MAX));

    second = Complex(int((rand() * 20) / RAND_MAX),
                     int((rand() * 20) / RAND_MAX));

    std::cout << "\nTest 3: prefix \"++\",\"--\" and postfix \"++\",\"--\":\n";

    std::cout << "First argument: " << first;

    std::cout << "\nSecond argument: " << second << "\n";

    first = ++second;

    std::cout << "\nAfter \"first = ++second\":\n";

    std::cout << "First argument: " << first;

    std::cout << "\nSecond argument: " << second << "\n";

    first = second++;

    std::cout << "\nAfter \"first = second++\":\n";

    std::cout << "First argument: " << first;

    std::cout << "\nSecond argument: " << second;

    complete();


    first = Complex(int((rand() * 20) / RAND_MAX),
                    int((rand() * 20) / RAND_MAX));

    second = Complex(int((rand() * 20) / RAND_MAX),
                     int((rand() * 20) / RAND_MAX));

    std::cout << "\nTest 4: binary \"+\",\"-\",\"*\",\"/\" and \"%\":\n";

    std::cout << "First argument: " << first;

    std::cout << "\nSecond argument: " << second << "\n";

    std::cout << "\"first + second\": " << first + second;

    std::cout << "\n\"first - second\": " << first - second;

    std::cout << "\n\"first * second\": " << first * second;

    std::cout << "\n\"first / second\": " << first / second;

    std::cout << "\n\"first % second\" (first/|second|): " << first % second;

    complete();


    first = Complex(int((rand() * 20) / RAND_MAX),
                    int((rand() * 20) / RAND_MAX));

    second = Complex(int((rand() * 20) / RAND_MAX),
                     int((rand() * 20) / RAND_MAX));

    std::cout << "\nTest 5: unary\"~\" and binary \"|\",\"&\",\"^\",\"<<\" and \">>\":\n";

    std::cout << "First argument: " << first;

    std::cout << "\nSecond argument: " << second << "\n";

    std::cout << "\"~first\": " << ~first;

    std::cout << "\n\"first | second\"(ort of first - second): " << (first | second);

    std::cout << "\n\"first & second\"(ort of first + second): " << (first & second);

    std::cout << "\n\"first ^ second\"(ort of first - ~second): " << (first ^ second);

    std::cout << "\n\"first << second\"(first* 2^second): " << (first << second);

    std::cout << "\n\"first >> second\"(first/ 2^second): " << (first >> second);

    complete();


    first = Complex(int((rand() * 20) / RAND_MAX),
                    int((rand() * 20) / RAND_MAX));

    second = Complex(int((rand() * 20) / RAND_MAX),
                     int((rand() * 20) / RAND_MAX));

    std::cout << "\nTest 6: cast to bool and doublet:\n";

    std::cout << "First argument: " << first;

    std::cout << "\nSecond argument: " << second << "\n";

    std::cout << "\"bool of first\"(first != 0): " << bool(first);

    std::cout << "\n\"double of second\"(real of second): " << double(second);

    complete();


    first = Complex(int((rand() * 20) / RAND_MAX),
                    int((rand() * 20) / RAND_MAX));

    second = Complex(int((rand() * 20) / RAND_MAX),
                     int((rand() * 20) / RAND_MAX));

    std::cout << "\nTest 7: logical operations \"!\",\"||\",\"&&\":\n";

    std::cout << "First argument: " << first;

    std::cout << "\nSecond argument: " << second << "\n";

    std::cout << "\"!first\": " << !first;

    std::cout << "\n\"first || second\"): " << (first || second);

    std::cout << "\n\"first && second\"): " << (first && second);

    complete();


    first = Complex(int((rand() * 20) / RAND_MAX),
                    int((rand() * 20) / RAND_MAX));

    second = Complex(int((rand() * 20) / RAND_MAX),
                     int((rand() * 20) / RAND_MAX));

    std::cout << "\nTest 8: comparisons :\n";

    std::cout << "First argument: " << first;

    std::cout << "\nSecond argument: " << second << "\n";

    std::cout << "\"first < second\"): " << (first < second);

    std::cout << "\n\"first != second\"): " << (first != second);

    std::cout << "\n\"first >= second\"): " << (first >= second);

    first = second;

    std::cout << "\n\"first == second\"(after first = second): " << (first == second);

    complete();


    first = Complex(int((rand() * 20) / RAND_MAX),
                    int((rand() * 20) / RAND_MAX));

    second = Complex(int((rand() * 20) / RAND_MAX),
                     int((rand() * 20) / RAND_MAX));

    std::cout << "\nTest 9: special operators:\n";

    std::cout << "First argument: " << first;

    std::cout << "\nSecond argument: " << second << "\n";

    std::cout << "\"first[0] and second[1]\": " << (first[0]) << " " << (second[1]);

    std::cout << "\n\"*first\"(log of first): " << (*first);

    std::cout << "\n\"second(2)\"(second * 2): " << (second(2));

    std::cout << "\n\"first,second\"(Decard mult): " << (first, second);

    complete();

    std::cout << "All tests done!";
    return 0;
}