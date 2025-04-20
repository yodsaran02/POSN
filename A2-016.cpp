#include <iostream>
using std::cin;
using std::cout;

int main(){
    char c1, c2;
    int n1, n2;
    cin >> c1;
    cin >> n1;
    cin >> c2;
    cin >> n2;
    if(c1 == c2 && n1 == n2){
        cout << 1000000;
    }else if(c1 != c2 && n1 == n2){
        cout << 100000;
    }else if(c1 == c2 && ((n1 % 1000) == (n2 % 1000))){
        cout << 2000;
    }else if(c1 == c2 && ((n1 % 100) == (n2 % 100))){
        cout << 1000;
    }else if(c1 != c2 && ((n1 % 1000) == (n2 % 1000))){
        cout << 200;
    }else if(c1 != c2 && ((n1 % 100) == (n2 % 100))){
        cout << 100;
    }else if(c1 == c2 && n1 != n2){
        cout << 20;
    }else{ cout << 0; }
}