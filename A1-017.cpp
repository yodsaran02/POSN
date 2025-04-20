#include <iostream>
using std::cin;
using std::cout;

int main(){
    int y1,m1,d1,y2,m2,d2;
    cin >> y1;
    cin >> m1;
    cin >> d1;
    cin >> y2;
    cin >> m2;
    cin >> d2;
    if(y1 == y2){
        if(m1 == m2){
            if(d1 == d2){
                cout << 0;
            }else{
                cout << ((d1 < d2) ? 1 : 2);
            }
        }else{
            cout << ((m1 < m2) ? 1 : 2);
        }
    }else{
        cout << ((y1 < y2) ? 1 : 2);
    }
        
}