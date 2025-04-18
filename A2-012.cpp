#include <iostream>
using namespace std;

int main(){
    int tmp;
    int val = 0;
    cin >> tmp;
    val = val + (tmp*10);
    cin >> tmp;
    val = val + (tmp*25);
    cin >> tmp;
    val = val + (tmp*3);
    cout << val;
}