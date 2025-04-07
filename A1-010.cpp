#include <iostream>
using namespace std;

int main(){
    int age;
    char status;
    cin >> age;
    cin >> status;
    if(status == 's' || status == 'S' || age < 18){
        cout << 20;
    }else{
        cout << 50;
    }
}