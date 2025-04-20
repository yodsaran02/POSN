#include <iostream>
using namespace std;

int main(){
    int tmp, min;
    for(int i = 0; i < 3; i++){
        cin >> tmp;
        if(i == 0){
            min = tmp;
        }else if(tmp < min){
            min = tmp;
        }
    }
    cout << min;
}