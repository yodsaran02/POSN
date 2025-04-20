#include <iostream>
#include <string>

int main(){
    std::string number;
    std::cin >> number;
    if(number[2] == '1' && number[3] == '6'){
        std::cout << "yes";
    }else{ std::cout << "no"; }
}