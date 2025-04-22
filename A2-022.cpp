#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int l, n, tmp1, tmp2, maxb = -1;
    cin >> l;
    cin >> n;
    vector<int> points;
    int bridge[n][2];
    for(int i = 0; i < n; i++){
        cin >> tmp1;
        cin >> tmp2;
        points.push_back(tmp1);
        points.push_back(tmp2);
        bridge[i][0] = tmp1;
        bridge[i][1] = tmp2;
    }
    sort(points.begin(), points.end());
    
    for(int i = 0; i < points.size(); i++){
        int arrt[2], countb = 0;
        float avg;
        if(i == 0){
            arrt[0] = points[i];
        }else{
            arrt[1] = points[i];
            if(arrt[0] == arrt[1]){ continue; }
            avg = ((arrt[0] + arrt[1]) / 2.0);
            //cout << arrt[0] << " " << arrt[1] << " " << avg << endl;
            for(int j = 0; j < n; j++){
                if(bridge[j][0] < avg && bridge[j][1] > avg){ countb++; }
            }
            if(countb > maxb){ maxb = countb; }
            arrt[0] = points[i];
        }
    }
    cout << maxb;
}