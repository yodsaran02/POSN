#include <iostream>
using std::cout;
using std::cin;

int main(){
    int isIncreasing = 0, isDecreasing = 0, tmp;
    int slot[2];
    for(int i = 0; i < 3; i++){
        cin >> tmp;
        if(i == 0){ 
            slot[0] = tmp;
        }else{
            slot[1] = tmp;
            if(slot[1] > slot[0]){
                isIncreasing = 1;
            }else if(slot[1] < slot[0]){
                isDecreasing = 1;
            }else if(slot[1] == slot[0]){
                isDecreasing = 1;
                isIncreasing = 1;
            }
            slot[0] = tmp;
        }
    }
    if(isIncreasing && !isDecreasing){ cout << "increasing"; }
    if(isDecreasing && !isIncreasing){ cout << "decreasing"; }
    if(isDecreasing && isIncreasing){ cout << "neither"; }
}