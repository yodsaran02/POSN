#include <iostream>
#include <string>
using namespace std;

int main(){
    string fname, lname, age;
    cin >> fname;
    cin >> lname;
    cin >> age;
    if(fname.length() > 5 && lname.length() > 5){
        cout << fname[0] << fname[1] << lname[lname.length() - 1] << age[age.length() - 1];
    }else{
        cout << fname[0] << age << lname[lname.length() - 1];
    }
}