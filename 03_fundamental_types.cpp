
#include <iostream>

int main(){
    // declared variable 'a' of type bool. Variable also initialized
    bool a = true;
    // other option is:
    // bool b{ true };

    // declared variable 'b' of type char. Variable also initialized
    char b = 'a';
    char c = 125;

    // declarted variable 'd' of type int. Variable also initialized
    int d = 125;    // decimal literal
    int e = 012;    // octal literal
    int f = 0xA;    // hexadecinal literal

    // declared variable 'g' of type floating-point. Variable also initialized
    double g { 3.14 };


    std::cout << "The value of a is: " << a << '\n';
    std::cout << "The value of b is: " << b << '\n';
    std::cout << "The value of c is: " << c << '\n';
    std::cout << "The value of d is: " << d << '\n';
    std::cout << "The value of e is: " << e << '\n';
    std::cout << "The value of f is: " << f << '\n';
    std::cout << "The value of g is: " << g << '\n';
}