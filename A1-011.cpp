#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    int count = 1;
    cin >> text;
    for(int i = 0; i < text.length(); i++){
        if(i == text.length()-1){
            cout << count << text[i];     
        }else if(text[i] != text[i+1]){
            cout << count << text[i];
            count = 1;
        }else{
            count++;
        }
    }
}