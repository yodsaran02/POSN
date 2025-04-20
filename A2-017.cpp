#include <iostream>
#include <map>
using namespace std;

int main(){
    char s, f, tmp;
    map<pair<char, char>, int> price_map = {
        {{'S','R'}, 60}, {{'S','T'}, 80},
        {{'M','R'}, 80}, {{'M','T'}, 100},
        {{'L','R'}, 100}, {{'L','T'}, 120}
    };
    int total, count;
    cin >> s;
    cin >> f;
    cin >> tmp;
    if(tmp == 'P'){
        cin >> count;
        cout << (price_map[{s,f}] + (15 * count));
    }else if(tmp == 'E'){
        cin >> count;
        cout << (price_map[{s,f}] + (10 * count));
    }else if(tmp == 'N'){
        cout << price_map[{s,f}];
    }
}