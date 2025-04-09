#include <map>
#include <iostream>
using namespace std;

int main(){
    int n,tmp;
    int max = -1;
    cin >> n;
    map<int, int> number;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(!number.count(tmp)){
            number[tmp] = 1;
        }else{
            number[tmp]++;
            if(number[tmp] > max){max = number[tmp];}
        }
    }
    cout << max;
}