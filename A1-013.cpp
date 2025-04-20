#include <iostream>
using namespace std;

int main(){
    char first;
    int second;
    cin >> first;
    cin >> second;
    if(first == 'H' && second == 4567){
        cout << "safe unlocked";
    }else if(first == 'H' && second !=  4567){
        cout << "safe locked - change digit";
    }else if(first != 'H' && second == 4567){
        cout << "safe locked - change char";
    }else{
        cout << "safe locked";
    }
}