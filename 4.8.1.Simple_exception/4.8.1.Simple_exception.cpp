#include <iostream>
#include <exception>
#include <string>
int function(std::string* str, int forbidden_length) {
    std::cout << "Введите слово: " << std::endl;
    std::cin >> *str;
    std::string _str = *str;
    if (_str.length() == forbidden_length) {
        throw "Вы ввели слово запретной длины! До свидания";
        return 1;
    }
    std::cout << "Длина слова (" << *str << ") равна " << _str.length() << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int forbidden_length;
    std::string str;
    std::cout << "Введите запретную длину: " << std::endl;
    std::cin >> forbidden_length;
    try {
        bool func = 1;
        do {
            func = function(&str, forbidden_length);    
        } while (func > 0);
    }
    catch (const char* err)
    {
        std::cerr << err << std::endl;
    }
}