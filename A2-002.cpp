#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    int num_point, x, y, max_p, min_p;
    int max_d = 0;
    cin >> num_point;
    map<int, vector<int>> negative_s;
    map<int, vector<int>> positive_s;
    for(int i = 0; i < num_point; i++){
        cin >> x;
        cin >> y;
        negative_s[x - y].push_back(x);
        positive_s[x + y].push_back(x);
    }
    for(auto it : negative_s){
        max_p = *max_element(it.second.begin(), it.second.end());
        min_p = *min_element(it.second.begin(), it.second.end());
        max_d = max(max_d, (max_p - min_p));
    }
    for(auto it : positive_s){
        max_p = *max_element(it.second.begin(), it.second.end());
        min_p = *min_element(it.second.begin(), it.second.end());
        max_d = max(max_d, (max_p - min_p));
    }
    cout << max_d;
}