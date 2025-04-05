#include <iostream>
using namespace std;

int main(){
    int tmp, max=-99999999;
    for(int i = 0; i < 3; i++){
        cin >> tmp;
        if(tmp > max){
            max = tmp;
        }
    }
    cout << max;
}