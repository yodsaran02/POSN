#include <iostream>
#include <vector>
#include <string>
using namespace std;

void trace(vector<vector<vector<int>>>& board, int pos_x, int pos_y){
    if(pos_x != 0){
        if(board[pos_x - 1][pos_y][0]){
            board[pos_x - 1][pos_y][1] = 1;
            trace(board, pos_x - 1, pos_y);
        }
    }
    if(pos_y != 0){
        if(board[pos_x][pos_y - 1][0]){
            board[pos_x][pos_y - 1][1] = 1;
            trace(board, pos_x, pos_y - 1);
        }
    }
}

int main(){
    int size;
    string tmp;
    cin >> size;
    vector<vector<vector<int>>> board(size, vector<vector<int>>(size, vector<int>(2, 0)));
    for(int i = 0; i < size; i++){
        cin >> tmp;
        for(int j = 0; j < size; j++){
            if(tmp[j] == '.'){
                board[i][j][0] = 1;
                board[i][j][1] = 0;
            }else{
                board[i][j][0] = 0;
                board[i][j][1] = 0;
            }
        }
    }
    board[size - 1][size - 1][1] = 1;
    trace(board, size-1, size-1);
    int count = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(board[i][j][1]){ count++; }
        }
    }
    cout << count;
}