#include <iostream>
using std::cin;
using std::cout;

int main(){
    int n1, n2, n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    if(n1 == n2 && n2 == n3){
        cout << "all the same";
    }else if(n1 != n2 && n2 != n3 && n3 != n1){
        cout << "all different";
    }else{ cout << "neither"; }
}