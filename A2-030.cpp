#include <iostream>
using namespace std;

int main(){
    int array[5][5], notValidrow = -1, notValidColumn = -1, count = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> array[j][i];
            count += array[j][i];
        }
        if(count % 2 != 0){ notValidrow = i; }
        count = 0;
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            count += array[i][j];
        }
        if(count % 2 != 0){ notValidColumn = i; }
        count = 0;
    }
    cout << notValidrow << " " << notValidColumn;
}