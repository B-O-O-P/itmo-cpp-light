#include <iostream>
#include <afxres.h>

//function
void nicePrint(std::string x) {
    for (int i = 0; i <= x.length(); i++) {
        std::cout << x[i];
        Sleep(100);
    }
    std::cout << "\n";
}

//class
class YourText {
public:

    //basic
    YourText() : str("") {};

    //ext.
    YourText(std::string &x) : str(x) {
    }

    //copy
    YourText(YourText &other) {
        str = other.str;
    }

    //move
    YourText(YourText &&other) {
        str = other.str;
    }

    //pass by reference
    void changeStrByReference(std::string &x) {
        str = x;
        x = "text";
    }

    //pass by value
    void changeStrByValue(std::string x) {
        str = x;
        x = "text";
    }

    //return by reference
    char &returnSymbolByReference(int i = 0) {
        if (i < size())
            return str[i];
    }

    //overlord
    void print(int i) {
        if (i < size()) std::cout << returnSymbolByReference(i) << '\n';
        else std::cout << "ERROR: Out of range!\n";
    }

    void print() {
        nicePrint(str);
    }

private:
    std::string str;

    int size() {
        return str.length();
    }
};

void testYourText(std::string &text) {
    YourText yourText(text);

    nicePrint("Input: ");
    yourText.print();
    yourText.print(0);

    nicePrint("Changed by value: ");
    yourText.changeStrByValue("text");
    yourText.print();//Your Text = "text"
    nicePrint(text);//Input = input

    nicePrint("Changed by reference: ");
    yourText.changeStrByReference(text);
    yourText.print();//Your Text = input
    nicePrint(text);//Input = "text"

    nicePrint("Changing symbol: ");
    yourText.print();
    yourText.returnSymbolByReference(2) = 'X';
    yourText.print();

}

int main() {
    std::string text;
    nicePrint("Enter your text:");
    std::cin >> text;
    testYourText(text);
    return 0;
}