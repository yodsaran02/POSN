#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int numc, numr, posc, posr, n;
	cin >> numr;
	cin >> numc;
	int empty = numr * numc;
	vector<vector<int>> grid(numr, vector<int>(numc, 0));
	cin >> posr;
	cin >> posc;
	cin >> n;
	int tempr, tempc;
	for(int i = 0; i < n; i++){
		cin >> tempr;
		cin >> tempc;
		if(!grid[tempr][tempc]){ empty--; }
		grid[tempr][tempc] = 100;		
		for(int j = -2; j <= 2; j++){
			for(int k = -2; k <= 2; k++){
				if(tempr+j < 0 || tempc+k < 0 || tempr+j >= numr || tempc+k >= numc){
					continue;
				}else if(j == 0 && k == 0){
					continue;
				}
				
				if(abs(j) == 1 || abs(k) == 1){
					if(grid[tempr+j][tempc+k] == 100){
						continue;
					}else{
						if(!grid[tempr+j][tempc+k]){ empty--; }
						grid[tempr+j][tempc+k] = 60;
					}
				}else if(abs(j) == 2 || abs(k) == 2){
					if(grid[tempr+j][tempc+k]){
						continue;
					}else{
						grid[tempr+j][tempc+k] = 20;
						empty--;
					}
				}
			}
		}
	}
	cout << empty << endl;
	cout << grid[posr][posc] << "%";
}
