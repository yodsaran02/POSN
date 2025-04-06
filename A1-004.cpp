#include <iostream>
using namespace std;

int main(){
    int isPassed = 1;
    int temp;
    int PassScore[3] = {5,20,25};
    for(int i = 0; i < 3; i++){
        cin >> temp;
        if(temp < PassScore[i]){
            isPassed = 0;
        }
    }
    if(isPassed){
        cout << "pass";
    }else{
        cout << "fail";
    }
}