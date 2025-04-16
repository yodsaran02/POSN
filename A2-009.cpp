#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compete(vector<int>& teams, vector<vector<int>>& performance, int& c){
    if(teams.size() == 1){
        return teams.front();
    }else{
        vector<int> temp;
        for(int i = 0; i < teams.size(); i = i + 2){
            int winner = performance[teams[i]-1][teams[i+1]-1];
            if(winner != teams[i] && teams[i] == c){
                winner = teams[i];
                c = 0;
            }else if(winner != teams[i+1] && teams[i+1] == c){
                winner = teams[i+1];
                c = 0;
            }
            temp.push_back(winner);
            //cout << winner << endl;
        }
        teams = temp;
    }
    return compete(teams, performance, c);
}

int main(){
    int n, c;
    cin >> n;
    cin >> c;
    vector<vector<int>> performance(n, vector<int>(n));
    vector<int> teams;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> performance[i][j];
        }
        teams.push_back(i+1);
    }
    //cout << "teams.size() = " << teams.size() << endl;
    cout << compete(teams, performance, c);
}