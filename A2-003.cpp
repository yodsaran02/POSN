#include <iostream>
using namespace std;

int main(){
    int n,count = 0;
    cin >> n;
    int heights[n];
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }
    for(int i = 0; i < n; i++){
        if(i == 0 && heights[i+1] < heights[i]){
            count++;
        }else if(i == n-1 && heights[i-1] < heights[i]){
            count++;
        }else if(heights[i+1] < heights[i] && heights[i-1] < heights[i]){
            count++;
        }
    }
    cout << count;

}