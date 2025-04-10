#include <iostream>
using namespace std;
int main(){
    int w, h, m, n, num, max1, max2;
    int xmax1 = -999999999;
    int xmax2 = -999999999;
    int ymax1 = -999999999;
    int ymax2 = -999999999;
    int tmp[2];
    cin >> w;
    cin >> h;
    cin >> m;
    cin >> n;
    for(int i = 0; i < m+2; i++){
        if(i == 0){
            tmp[0] = 0;
        }else if(i != m+1){
            cin >> tmp[1];
            num = (tmp[1] - tmp[0]);
            if(num > xmax1){
                xmax2 = xmax1;
                xmax1 = num;
            }else if(num > xmax2){
                xmax2 = num;
            }
            tmp[0] = tmp[1];
        }else{
            tmp[1] = w;
            num = (tmp[1] - tmp[0]);
            if(num > xmax1){
                xmax2 = xmax1;
                xmax1 = num;
            }else if(num > xmax2){
                xmax2 = num;
            }
            tmp[0] = tmp[1];
        }
    }
    for(int i = 0; i < n+2; i++){
        if(i == 0){
            tmp[0] = 0;
        }else if(i != n+1){
            cin >> tmp[1];
            num = (tmp[1] - tmp[0]);
            if(num > ymax1){
                ymax2 = ymax1;
                ymax1 = num;
            }else if(num > ymax2){
                ymax2 = num;
            }
            tmp[0] = tmp[1];
        }else{
            tmp[1] = h;
            num = (tmp[1] - tmp[0]);
            if(num > ymax1){
                ymax2 = ymax1;
                ymax1 = num;
            }else if(num > ymax2){
                ymax2 = num;
            }
            tmp[0] = tmp[1];
        }
    }
    //cout << xmax1 << " " << xmax2 << "\n";
    //cout << ymax1 << " " << ymax2;
    max1 = xmax1 * ymax1;
    max2 = ((xmax1 * ymax2) >= (xmax2 * ymax1)) ? (xmax1 * ymax2) : (xmax2 * ymax1);
    cout << max1 << " " << max2;
}