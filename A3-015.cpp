#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, tmp, length = 0;
    vector<int> towers;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        towers.push_back(tmp);
    }
    sort(towers.begin(), towers.end());
    int tmp2 = 0;
    for(int i = 0; i < n; i++){
        tmp2 += towers.at(i);
        length += 2*tmp2;
    }
    cout << length;
}