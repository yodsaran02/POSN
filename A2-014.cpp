#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string name1, name2;
    cin >> name1;
    cin >> name2;
    int length = max(name1.length(), name2.length());
    if(name1.length() < length){
        int add_length = length - name1.length();
        for(int i = 0; i < add_length; i++){
            name1 = name1 + name1[(i % name1.length())];
        }
    }
    if(name2.length() < length){
        int add_length = length - name2.length();
        for(int i = 0; i < add_length; i++){
            name2 = name2 + name2[(i % name2.length())];
        }
    }
    transform(name1.begin(), name1.end(), name2.begin(), name2.begin(), [](char a, char b){
        a = tolower(a);
        b = tolower(b);
        if(a == 'l' || a == 'o' || a == 'v' || a == 'e' || b == 'l' || b == 'o' || b == 'v' || b  == 'e'){
            return 'w';
        }else{ return '$'; }
    });
    int wInName = 0;
    for(int i = 0; i < length; i++){
        if(name2[i] == 'w'){
            wInName++;
        }
    }
    int wMax = -1, temp = 0;
    char temp_c[2]; 
    for(int i = 0; i < length; i++){
        if(i == 0){
            temp_c[0] = name2[i];
            if(temp_c[0] == 'w'){ temp = 1;}
        }else{
            temp_c[1] = name2[i];
            if(temp_c[1] == 'w' && temp_c[0] == '$'){
                temp = 1;
            }else if(temp_c[1] == temp_c[0] && temp_c[0] == 'w'){
                temp++;
            }
            if(temp > wMax){ wMax = temp; }
            temp_c[0] = temp_c[1];
        }
    }  
    //cout << wMax << '\n';
    if(wInName % 2 == 0){
        if(wMax >= 2){
            cout << name2;
        }else{
            cout << name2 << '#';
        }
    }else if(wInName % 2 != 0){
        cout << name2 << wMax;
    }
}