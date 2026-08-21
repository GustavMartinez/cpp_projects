#include <iostream>
#include <string>

int main(){

    std::string a = "no"; // change here

    if (a == "yes"){
        std::cout << "A is yes\n" << std::endl;
    }
    else if(a == "no"){
        std::cout << "A is no\n";
    }
    else{
        std::cout << "A is not yes\n";
    }
}