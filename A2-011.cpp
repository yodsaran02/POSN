#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int tmp;    
    vector<int> val;
    for(int i = 0; i < 10; i++){
        cin >> tmp;
        auto it = find(val.begin(), val.end(), tmp);
        if(it == val.end()){
            val.push_back(tmp);
            cout << tmp << " ";
        }
    }
}