#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string msg;
    int isValid = 0;
    int maxA = 0;
    int countA = 0;
    cin >> msg;
    transform(msg.begin(), msg.end(), msg.begin(), [](char c){
        return tolower(c);
    });
    for(int i = 0; i < msg.length(); i++){
        if(msg[i] == 'r'){
            for(int j = 1; j < msg.length()-i; j++){
                if(msg[i+j] == 'a'){
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
        }else if(msg[i] == 'a' ){
            if (i == 0 || msg[i-1] != 'r') {
                cout << "no " << i;
                exit(0);
            }
        }else if(msg[i] == 'b' && i != (msg.length()-1)){
            if(msg[i+1] != 'i' && msg[i+1] != 't'){
                cout << "no " << (i+1);
                exit(0);
            }else{
                i++;
                isValid++;
            }
        }else if(msg[i] == 'b'){ isValid++; }
    }
    if(isValid){ cout << "yes " << maxA << endl; }
    if(!isValid){ cout << "unknown " << msg.length(); }
}