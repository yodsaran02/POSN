#include <iostream>
#include <map>
using namespace std;

int main(){
    map<pair<char,int>, int> t2c = {
        {{'R', 1}, 12}, {{'R', 2}, 18}, {{'R', 3}, 25},
        {{'T', 1}, 15}, {{'T', 2}, 20}, {{'T', 3}, 30},
        {{'M', 1}, 10}, {{'M', 2}, 15}, {{'M', 3}, 20}
    };
    map<char, int> b2c = {
        {'H', 5}, {'O', 3}, {'J', 2}
    };
    char tmp_c;
    int tmp1, tmp2, cal = 0;
    cin >> tmp_c;
    cin >> tmp1;
    cal = cal + (b2c[tmp_c] * tmp1);
    cin >> tmp_c;
    cin >> tmp1;
    cin >> tmp2;
    cal = cal + (t2c[{tmp_c, tmp1}] * tmp2);
    cout << cal;
}