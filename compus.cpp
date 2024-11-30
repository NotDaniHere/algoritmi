#include <bits/stdc++.h>
using namespace std;
int main() {
    int a; cout << "a="; cin >> a;
    int n_div = 0;
    for(int i = 1; i < a; i++) {
        if(!(a%i)) n_div++;
        else continue;
    }
    if(n_div < 3) cout << "Numarul nu este compus";
    else cout << "Numarul este compus";
    return 0;
}