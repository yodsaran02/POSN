#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num_point;
    int max = 0;
    cin >> num_point;
    int points[num_point][2];
    for(int i = 0; i < num_point; i++){
        cin >> points[i][0];
        cin >> points[i][1];
    }
    for(int i = 0; i < num_point; i++){
        //cout << i;
        for(int j = i + 1; j < num_point; j++){
            //cout << j;
            if(abs(points[i][0] - points[j][0]) == abs(points[i][1] - points[j][1])){
                max = (abs(points[i][0] - points[j][0]) > max) ? abs(points[i][0] - points[j][0]) : max;
                //cout << "Found!";
            }
        }
    }
    cout << max;
}