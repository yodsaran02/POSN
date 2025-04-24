#include <iostream>
using namespace std;
int main(){
    int year;
    cin >> year;
    if(year <= 1582 && year % 4 == 0){
        cout << "yes";
    }else if(year % 400 == 0){
        cout << "yes";
    }else if(year % 100 == 0){
        cout << "no";
    }else if(year % 4 == 0){
        cout << "yes";
    } 
}