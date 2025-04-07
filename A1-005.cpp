#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string seasons[4] = {"winter", "spring", "summer", "fall"};
    int month, day;
    cin >> month;
    cin >> day;
    if(month % 3 != 0){
        cout << seasons[int (floor(month/3))];
    }else if(day < 21){
        cout << seasons[(month/3)-1];
    }else if(month == 12){
        cout << seasons[0];
    }else{
        cout << seasons[(month/3)];
    }
}