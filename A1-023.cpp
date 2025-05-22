#include <iostream>
using namespace std;

int main(){
    int t;
    char cf;
    cin >> t;
    cin >> cf; 
    cf = tolower(cf);
    if(cf == 'c'){
        if(t <= 0){ 
            cout << "solid"; 
        }else if(0 < t < 100){ 
            cout << "liquid"; 
        }else if(100 <= t){ 
            cout << "gas"; 
        }
    }else if(cf == 'f'){
        if(t <= 32){ 
            cout << "solid"; 
        }else if(32 < t < 212){ 
            cout << "liquid"; 
        }else if(212 <= t){ 
            cout << "gas"; 
        }
    }
}