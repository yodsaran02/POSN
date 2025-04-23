#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string msg, msg_lower;
    int isValid = 0;
    int maxA = 0;
    int countA = 0;
    cin >> msg;
    transform(msg.begin(), msg.end(), msg_lower.begin(), [](char c){
        return tolower(c);
    });
    for(int i = 0; i < msg.length(); i++){
        if(msg_lower[i] == 'r'){
            for(int j = 1; j < msg.length()-i; j++){
                if(msg_lower[i+j] == 'a'){
                    countA++;
                    isValid++;
                }else if(countA == 0){ 
                    cout << "no " << (i+j);
                    exit(0);
                }else{ break; }
            }
            //if( countA == 0 ){ isValid = false; }
            if( countA > maxA ){ maxA = countA; }
            isValid++;
            //cout << countA << endl;
            i += countA;
            countA = 0;
        }else if(msg_lower[i] == 'a' && msg_lower[i-1] != 'r'){
            cout << "no " << (i);
            exit(0);
        }else if(msg_lower[i] == 'b' && (msg_lower[i+1] != 'i' && msg_lower[i+1] != 't')){
            cout << "no " << (i+1);
            exit(0);
        }else if(msg_lower[i] == 'b'){ isValid++; }
    }
    if(isValid){ cout << "yes " << maxA << endl; }
    if(!isValid){ cout << "unknown"; }
}