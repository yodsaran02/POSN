#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string shout;
    cin >> shout;
    transform(shout.begin(), shout.end(), shout.begin(), [](char c){
        return tolower(c);
    });
    int tempU = 0;
    int maxU = -1;
    bool haveb = false;
    int bpos;
    bool havebuu = false;
    for(int i = 0; i < shout.length(); i++){
        if(shout[i] == 'b'){ 
            if(!haveb){ bpos = i; }
            haveb = true;
            for(int j = 1; j < shout.length()-i; j++){
                if(shout[i+j] == 'u'){ 
                    tempU++; 
                    //cout << "A";
                }else{ j = shout.length()-i; }
                if(tempU == 2){ havebuu = true; }
            }
        }
        //cout << tempU;
        if(tempU > maxU){ maxU = tempU; }
        tempU = 0;
    }
    if(havebuu){ 
        cout << "Yes" << " " << maxU; 
        exit(0);
    }
    if(haveb){
        for(int i = bpos+1; i < shout.length(); i++){
            shout[i] = 'U';
        }
        cout << shout;
    }else{
        char buu[3] = {'B', 'U', 'U'};
        for(int i = 0; i < shout.length(); i++){
            shout[i] = buu[i % 3];
        }
        cout << shout;
    }
}