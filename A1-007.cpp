#include <iostream>
#include <string>
using namespace std;

int main(){
    char vowels[5] = {'a','e','i','o','u'};
    char letter;
    int isVowel = 0;
    cin >> letter;
    for(int i = 0; i < 5; i++){
        if(letter == vowels[i]){
            isVowel = 1;
            i = 5;
        }
    }
    string vowel = (isVowel) ? "yes" : "no";
    cout << vowel;
}