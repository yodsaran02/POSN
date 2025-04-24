#include <iostream>
using namespace std;
int main(){
    int n, overlap = 0; 
    cin >> n;
    n++;
    int path1[n], path2[n], temp1[2], temp2[2];

    path1[0] = 1;
    path2[0] = 1;
    for(int i = 1; i < n; i++){
        cin >> path1[i];
    }
    for(int i = 1; i < n; i++){
        cin >> path2[i];
    }
    for(int i = 0; i < n; i++){
        if(i == 0){
            temp1[0] = path1[i];
            temp2[0] = path2[i];
        }else{
            temp1[1] = path1[i];
            temp2[1] = path2[i];
            bool i1s = false, i2s = false;
            if(temp1[0] > temp1[1]){ swap(temp1[0],temp1[1]); i1s = true; }
            if(temp2[0] > temp2[1]){ swap(temp2[0],temp2[1]); i2s = true; }
            if(temp1[0] == temp2[0] && temp1[1] == temp2[1]){
                overlap++;
            }else{
                if(temp1[0] > temp2[0] && temp1[0] < temp2[1] && temp1[1] > temp2[1]){
                    overlap++;
                }else if(temp1[1] > temp2[0] && temp1[1] < temp2[1] && temp1[0] < temp2[0]){
                    overlap++;
                }
            }
            if(i1s){ swap(temp1[0],temp1[1]); }
            if(i2s){ swap(temp2[0],temp2[1]); }
            temp1[0] = temp1[1];
            temp2[0] = temp2[1];
        }
    }
    cout << overlap;
}