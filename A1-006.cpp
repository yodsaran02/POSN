#include <iostream>
#include <string>
using namespace std;

int main(){
    int n1,n2;
    cin >> n1;
    cin >> n2;
    string isDivisible = (n1 % n2 == 0) ? "yes" : "no";
    cout << isDivisible;
}