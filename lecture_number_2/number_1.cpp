#include <iostream>
#include <string>

class FooString {
private:
    std::string str;

public:
    FooString(const std::string& inputStr) : str(inputStr) {}

    int length() const {
        return str.length();
    }

    bool compare(const FooString& other) const {
        return str.length() == other.length();
    }
};

int main() {
    // Создание объектов класса StringHelper с исходными строками
    FooString str1("MAI");
    FooString str2("307");
    FooString str3("");
    FooString str4("I love MAI307");

    // Проверка операции получения длины строки (getLength)
    std::cout << "Length of str1: " << str1.length() << std::endl;
    std::cout << "Length of str2: " << str2.length() << std::endl;
    std::cout << "Length of str3: " << str3.length() << std::endl;

    // Проверка операции сравнения длин строк (compareLength)
    bool isEqual = str1.compare(str2);
    std::cout << "Length of str1 == Length of str2: " << std::boolalpha << isEqual << std::endl;

    isEqual = str2.compare(str3);
    std::cout << "Length of str2 == Length of str3: " << std::boolalpha << isEqual << std::endl;

    return 0;
}
