#include <iostream>

int main(){
    std::cout << "The size of type char is: " << sizeof(char) << " byte(s) \n";
    std::cout << "The size of type char16_t is: " << sizeof(char16_t) << " byte(s) \n"; // for holding UTF-16 char
    std::cout << "The size of type wchar_t is: " << sizeof(wchar_t) << " byte(s) \n";   // for holding char of Unicode char.
    std::cout << "The size of type bool is: " << sizeof(bool) << " byte(s) \n";
    std::cout << "The size of type int is: " << sizeof(int) << " byte(s) \n";
    std::cout << "The size of type int64_t is: " << sizeof(int64_t) << " byte(s) \n";
    std::cout << "The size of type double is: " << sizeof(double) << " byte(s) \n";
}