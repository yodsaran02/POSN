#include <iostream>
using namespace std;

int main(){
    int num_in;
    char op;
    cin >> num_in;
    cin >> op;
    int num_out = ((num_in - (num_in % 10)) / 10) + ((num_in % 10) * 10);
    if(op == '+'){
        cout << num_in << " + " << num_out << " = " << (num_in + num_out);
    }else if(op == '*'){
        cout << num_in << " * " << num_out << " = " << (num_in * num_out);
    }
}