#include <iostream>
using std::cin;
using std::cout;

int main(){
    int w, h, l, p2l;
    cin >> w;
    cin >> h;
    cin >> l;
    cin >> p2l;
    cout << (l * 2 * (w + h)) << std::endl;
    cout << (l * 2 * (w + h) * p2l);
}