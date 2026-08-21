#include <iostream>
#include <string>

int main(){
    std::string s = "Hello world.";
    std::cout << s << "\n";


    // Concatenando strings
    std::string name = "Gustavo";
    std::string fullname = name += " Martinez";
    std::cout << fullname << "\n";
}