#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main(){
    string r_number[9] = {"I","II","III","IV","V","VI","VII","VIII","IX"};
    int number;
    cin >> number;
    if(number <= 9 && number >= 1){
        cout << r_number[number-1];
    }else if(number < 0){
        cout << "Error : Please input positive number";
    }else{
        cout << "Error : Out of range";
    }
}