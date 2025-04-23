#include <iostream>
using namespace std;

int main(){
    int l, np, jump_r, jump_m, jump_f, pr = 0, pm = 0, pf = 0, tmpl, tmpp, maxp = -1;
    cin >> l;
    cin >> np;
    cin >> jump_r;
    cin >> jump_m;
    cin >> jump_f;
    for(int i = 0; i < np; i++){
        cin >> tmpl;
        cin >> tmpp;
        if(tmpl % jump_r == 0){ pr += tmpp; }
        if(tmpl % jump_m == 0){ pm += tmpp; }
        if(tmpl % jump_f == 0){ pf += tmpp; }
    }
    if(pr > maxp){ maxp = pr; }
    if(pm > maxp){ maxp = pm; }
    if(pf > maxp){ maxp = pf; }
    if(pr == maxp){ cout << "Rabbit " << pr << endl; }
    if(pm == maxp){ cout << "Monkey " << pm << endl; }
    if(pf == maxp){ cout << "Frog " << pf << endl; }
}