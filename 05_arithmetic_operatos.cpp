// Operaciones de suma, resta, multiplicación y división

#include <iostream>

int main(){
    float a = 56;
    float b = 26;

    float addition = a + b;
    float subtraction = a - b;
    float multiplication = a * b;
    float division = a / b;
    // modulo = a % b;
    
    
    std::cout << "Operacion con los números: " << a << " y " << b << '\n';
    std::cout << "La suma es: " << addition << '\n';
    std::cout << "La resta es: " << subtraction << '\n';
    std::cout << "la multiplicación es: " << multiplication << '\n';
    std::cout << "La división es: " << division << '\n';
}