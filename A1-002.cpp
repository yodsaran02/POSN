#include <iostream>
using namespace std;

int counteach(int unit,int money){
    int count = 0;
    while (money >= unit){
        money = money - unit;
        count++;
    }
    return count;
}

int main(){
    int moneys, count;
    cin >> moneys;
    int unit[4] = {10, 5, 2, 1};
    for(int i = 0; i < 4; i++){
        count = counteach(unit[i],moneys);
        cout << unit[i] << " = " << count << "\n";
        moneys = moneys - (unit[i]*count);
    }   
}

