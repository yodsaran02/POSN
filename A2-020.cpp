#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n, tmp_in, maxhop = -1;
    cin >> n;
    map<int, pair<int, int>> sr;
    for(int i = 1; i <= n; i++){
        cin >> tmp_in;
        sr[i] = {tmp_in, 0};
    }
    for(int i = 1; i<= n; i++){
        if(sr[i].second != 0){ continue; }
        vector<int> tpath;
        int pointo = sr[i].first, hop = 1;
        tpath.push_back(pointo);
        //cout << pointo;
        while (pointo != i){
            pointo = sr[pointo].first;
            tpath.push_back(pointo);
            //cout << pointo;
            hop++;
        }
        for(int num : tpath){
            sr[num].second = hop;
        }
        if(hop > maxhop){ maxhop = hop; }
        //cout << endl;
    }
    cout << maxhop;
}